#include "menucheat.h"
#include "ui_menucheat.h"
#include <QMouseEvent>
MenuCheat::MenuCheat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuCheat)
  , m_dragging(false)
  , m_minimizeButton(findChild<QPushButton*>("minimize"))
{
    ui->setupUi(this);
    QPixmap  pix(":/icons/icons/wp8019816-future-ultra-hd-wallpapers.jpg");
    int w = ui->BG_LG->width();
    int h = ui->BG_LG->height();
    ui->BG_LG->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    setMouseTracking(true);
    QFrame *frame = findChild<QFrame*>("navi");
    frame->setMouseTracking(true);
    connect(m_minimizeButton, &QPushButton::clicked, this, &MenuCheat::minimizeApplicationCheat);
    setWindowFlag(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
}
MenuCheat::~MenuCheat()
{
    delete ui;
}

void MenuCheat::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_dragPosition = event->globalPos() - this->geometry().topLeft();
        m_dragging = true;
    }
}

void MenuCheat::mouseMoveEvent(QMouseEvent *event)
{
    if (m_dragging && (event->buttons() & Qt::LeftButton)) {
        move(event->globalPos() - m_dragPosition);
    }
}

void MenuCheat::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    m_dragging = false;
}

void MenuCheat::minimizeApplicationCheat()
{
     showMinimized();
}

void MenuCheat::on_minimize_clicked()
{
    showMinimized();
}


void MenuCheat::on_exit_clicked()
{
    QApplication::quit();
}

void MenuCheat::on_pushButton_pressed()
{
    ui->pushButton->setStyleSheet("background-color: rgba(0,0,0,0.7); border-radius: 20; color:rgba(255,255,255,1);");
}


void MenuCheat::on_pushButton_released()
{
    ui->pushButton->setStyleSheet("background-color: rgba(0,0,0,0.5); border-radius: 20; color:rgba(255,255,255,1);");
}
void MenuCheat::on_game1button_pressed()
{
    ui->game1button->setStyleSheet("background-color: rgba(255,255,255,0.5); border-radius: 20; color:rgba(255,255,255,1);");
    ui->Nametag_2->setText("CSGO");
}

void MenuCheat::on_game1button_released()
{
    ui->game1button->setStyleSheet("background-color: rgba(255,255,255,0.3); border-radius: 20; color:rgba(255,255,255,1);");
}

void MenuCheat::on_game2button_pressed()
{
    ui->game2button->setStyleSheet("background-color: rgba(255,255,255,0.5); border-radius: 20; color:rgba(255,255,255,1);");
    ui->Nametag_2->setText("Valorant");
}
void MenuCheat::on_game2button_released()
{
    ui->game2button->setStyleSheet("background-color: rgba(255,255,255,0.3); border-radius: 20; color:rgba(255,255,255,1);");
}

void MenuCheat::on_game3button_pressed()
{
    ui->game3button->setStyleSheet("background-color: rgba(255,255,255,0.5); border-radius: 20; color:rgba(255,255,255,1);");
    ui->Nametag_2->setText("Fortnite");
}
void MenuCheat::on_game3button_released()
{
    ui->game3button->setStyleSheet("background-color: rgba(255,255,255,0.3); border-radius: 20; color:rgba(255,255,255,1);");
    
}

void MenuCheat::on_game4button_pressed()
{
    ui->game4button->setStyleSheet("background-color: rgba(255,255,255,0.5); border-radius: 20; color:rgba(255,255,255,1);");
    ui->Nametag_2->setText("Apex Legends");
}
void MenuCheat::on_game4button_released()
{
    ui->game4button->setStyleSheet("background-color: rgba(255,255,255,0.3); border-radius: 20; color:rgba(255,255,255,1);");
}


