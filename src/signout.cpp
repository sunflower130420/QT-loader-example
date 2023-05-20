#include "signout.h"
#include "ui_signout.h"
#include <QMouseEvent>
SignOut::SignOut(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignOut)
  , m_dragging(false)
  , m_minimizeButton(findChild<QPushButton*>("minimize"))
{
    ui->setupUi(this);
    QPixmap  pix(":/icons/icons/wp8019816-future-ultra-hd-wallpapers.jpg");
    int w = ui->BG_LO->width();
    int h = ui->BG_LO->height();
    ui->BG_LO->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->Pass_Sout->setEchoMode(QLineEdit::Password);
    ui->ConfirmPass_Sout->setEchoMode(QLineEdit::Password);
    setMouseTracking(true);
    QFrame *frame = findChild<QFrame*>("navi");
    frame->setMouseTracking(true);
    connect(m_minimizeButton, &QPushButton::clicked, this, &SignOut::minimizeApplicationSO);
    setWindowFlag(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
}

SignOut::~SignOut()
{
    delete ui;
}

void SignOut::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_dragPosition = event->globalPos() - this->geometry().topLeft();
        m_dragging = true;
    }
}

void SignOut::mouseMoveEvent(QMouseEvent *event)
{
    if (m_dragging && (event->buttons() & Qt::LeftButton)) {
        move(event->globalPos() - m_dragPosition);
    }
}

void SignOut::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    m_dragging = false;
}

void SignOut::on_RegisterAcc_Sout_clicked()
{
    this->hide();
    MenuCheat menucheat;
    menucheat.setModal(true);
    menucheat.exec();
}


void SignOut::on_SignIn_Sout_clicked()
{
    this->hide();
    SignIn signin;
    signin.setModal(true);
    signin.exec();
}

void SignOut::minimizeApplicationSO()
{
     showMinimized();
}

void SignOut::on_minimize_clicked()
{
    showMinimized();
}


void SignOut::on_exit_clicked()
{
    QApplication::quit();
}

