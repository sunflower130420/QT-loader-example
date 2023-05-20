#include "signin.h"
#include "ui_signin.h"
#include <QMouseEvent>
SignIn::SignIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignIn)
    , m_dragging(false)
    , m_minimizeButton(findChild<QPushButton*>("minimize"))
{
    ui->setupUi(this);
    QPixmap  pix(":/icons/icons/wp8019816-future-ultra-hd-wallpapers.jpg");
    int w = ui->BG_LG1->width();
    int h = ui->BG_LG1->height();
    ui->BG_LG1->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->Pass_Sin->setEchoMode(QLineEdit::Password);
    setMouseTracking(true);
    QFrame *frame = findChild<QFrame*>("navi");
    frame->setMouseTracking(true);
    connect(m_minimizeButton, &QPushButton::clicked, this, &SignIn::minimizeApplicationSG);
    setWindowFlag(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
}

SignIn::~SignIn()
{
    delete ui;
}

void SignIn::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_dragPosition = event->globalPos() - this->geometry().topLeft();
        m_dragging = true;
    }
}

void SignIn::mouseMoveEvent(QMouseEvent *event)
{
    if (m_dragging && (event->buttons() & Qt::LeftButton)) {
        move(event->globalPos() - m_dragPosition);
    }
}

void SignIn::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    m_dragging = false;
}
void SignIn::on_Sign_in_clicked()
{
    this->hide();
    MenuCheat menucheat;
    menucheat.setModal(true);
    menucheat.exec();
}

void SignIn::on_SignUp_clicked()
{
    this->hide();
    SignOut signout;
    signout.setModal(true);
    signout.exec();
}


void SignIn::on_LGin_clicked()
{
    this->hide();
    MenuCheat menucheat;
    menucheat.setModal(true);
    menucheat.exec();
}

void SignIn::minimizeApplicationSG()
{
     showMinimized();
}

void SignIn::on_minimize_clicked()
{
    showMinimized();
}


void SignIn::on_exit_clicked()
{
    QApplication::quit();
}

