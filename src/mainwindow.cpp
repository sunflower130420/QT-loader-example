#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMouseEvent>
#include <QFrame>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_dragging(false)
    , m_minimizeButton(findChild<QPushButton*>("minimize"))
{

    ui->setupUi(this);
    QPixmap  pix(":/icons/icons/wp8019816-future-ultra-hd-wallpapers.jpg");
    int w = ui->BG_LG->width();
    int h = ui->BG_LG->height();
    ui->BG_LG->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->Pass->setEchoMode(QLineEdit::Password);
    ui->ConfirmPass->setEchoMode(QLineEdit::Password);
    setMouseTracking(true);
    QFrame *frame = findChild<QFrame*>("navi");
    frame->setMouseTracking(true);
    connect(m_minimizeButton, &QPushButton::clicked, this, &MainWindow::minimizeApplication);
    setWindowFlag(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_dragPosition = event->globalPos() - this->geometry().topLeft();
        m_dragging = true;
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (m_dragging && (event->buttons() & Qt::LeftButton)) {
        move(event->globalPos() - m_dragPosition);
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    m_dragging = false;
}
void MainWindow::on_RegisterAcc_clicked()
{
    this->hide();
    MenuCheat menucheat;
    menucheat.setModal(true);
    menucheat.exec();
}


void MainWindow::on_SignIn_clicked()
{
    this->hide();
    SignIn signin;
    QGraphicsOpacityEffect *effect = new QGraphicsOpacityEffect(&signin);
    signin.setGraphicsEffect(effect);
    QPropertyAnimation *animation = new QPropertyAnimation(effect, "opacity");
    animation->setDuration(1000);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start();
    signin.setModal(true);
    signin.exec();
}

void MainWindow::minimizeApplication()
{
     showMinimized();
}

void MainWindow::on_minimize_clicked()
{
     showMinimized();
}


void MainWindow::on_exit_clicked()
{
    QApplication::quit();
}

