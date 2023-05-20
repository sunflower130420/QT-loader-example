/********************************************************************************
** Form generated from reading UI file 'menucheat.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUCHEAT_H
#define UI_MENUCHEAT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MenuCheat
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *lineEdit_3;
    QLabel *lineEdit_4;
    QLabel *logo_cheat_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *Nametag_2;
    QLabel *Nametag_3;
    QLabel *Nametag_4;
    QLabel *Nametag_5;
    QLabel *Nametag_6;
    QLabel *Nametag_7;
    QLabel *Nametag_8;
    QFrame *navi;
    QPushButton *minimize;
    QPushButton *exit;
    QLabel *label_6;
    QLabel *BG_LG;
    QPushButton *game1button;
    QPushButton *game2button;
    QPushButton *game3button;
    QPushButton *game4button;

    void setupUi(QDialog *MenuCheat)
    {
        if (MenuCheat->objectName().isEmpty())
            MenuCheat->setObjectName("MenuCheat");
        MenuCheat->resize(1000, 587);
        label_2 = new QLabel(MenuCheat);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 190, 381, 21));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);\n"
"color:rgba(255,255,255,1);\n"
"border:none"));
        label_3 = new QLabel(MenuCheat);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(610, 140, 371, 101));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0.5);\n"
"border-radius: 20"));
        lineEdit_3 = new QLabel(MenuCheat);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setEnabled(true);
        lineEdit_3->setGeometry(QRect(620, 150, 171, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setUnderline(false);
        lineEdit_3->setFont(font1);
        lineEdit_3->setMouseTracking(false);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);\n"
"color:rgba(255,255,255,1);\n"
"border:none"));
        lineEdit_3->setAlignment(Qt::AlignCenter);
        lineEdit_4 = new QLabel(MenuCheat);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(630, 190, 141, 31));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setUnderline(false);
        lineEdit_4->setFont(font2);
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);\n"
"color:rgba(255,255,255,1);\n"
"border:none"));
        lineEdit_4->setAlignment(Qt::AlignCenter);
        logo_cheat_3 = new QLabel(MenuCheat);
        logo_cheat_3->setObjectName("logo_cheat_3");
        logo_cheat_3->setGeometry(QRect(840, 130, 191, 141));
        QFont font3;
        font3.setPointSize(24);
        logo_cheat_3->setFont(font3);
        logo_cheat_3->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/Raw.png")));
        logo_cheat_3->setScaledContents(true);
        label_4 = new QLabel(MenuCheat);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 230, 411, 351));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0.5);\n"
"border-radius: 20"));
        label_5 = new QLabel(MenuCheat);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(600, 280, 381, 231));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0.5);\n"
"border-radius: 20"));
        pushButton = new QPushButton(MenuCheat);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(600, 520, 381, 61));
        QFont font4;
        font4.setBold(true);
        pushButton->setFont(font4);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0.5);\n"
"border-radius: 20;\n"
"color:rgba(255,255,255,1);\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons/arrow-down.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        Nametag_2 = new QLabel(MenuCheat);
        Nametag_2->setObjectName("Nametag_2");
        Nametag_2->setGeometry(QRect(620, 300, 201, 41));
        QFont font5;
        font5.setPointSize(16);
        font5.setBold(true);
        Nametag_2->setFont(font5);
        Nametag_2->setLayoutDirection(Qt::LeftToRight);
        Nametag_2->setAutoFillBackground(false);
        Nametag_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);\n"
"color:rgba(255,255,255,1);\n"
"border:none"));
        Nametag_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Nametag_3 = new QLabel(MenuCheat);
        Nametag_3->setObjectName("Nametag_3");
        Nametag_3->setGeometry(QRect(620, 330, 131, 41));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        Nametag_3->setFont(font6);
        Nametag_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);\n"
"color:rgba(255,255,255,1);\n"
"border:none"));
        Nametag_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Nametag_4 = new QLabel(MenuCheat);
        Nametag_4->setObjectName("Nametag_4");
        Nametag_4->setGeometry(QRect(620, 360, 81, 31));
        QFont font7;
        font7.setPointSize(10);
        font7.setBold(false);
        Nametag_4->setFont(font7);
        Nametag_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);\n"
"color:rgba(255,255,255,1);\n"
"border:none"));
        Nametag_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Nametag_5 = new QLabel(MenuCheat);
        Nametag_5->setObjectName("Nametag_5");
        Nametag_5->setGeometry(QRect(620, 390, 141, 31));
        Nametag_5->setFont(font6);
        Nametag_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);\n"
"color:rgba(255,255,255,1);\n"
"border:none"));
        Nametag_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Nametag_6 = new QLabel(MenuCheat);
        Nametag_6->setObjectName("Nametag_6");
        Nametag_6->setGeometry(QRect(620, 420, 211, 21));
        Nametag_6->setFont(font7);
        Nametag_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);\n"
"color:rgba(255,255,255,1);\n"
"border:none"));
        Nametag_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Nametag_7 = new QLabel(MenuCheat);
        Nametag_7->setObjectName("Nametag_7");
        Nametag_7->setGeometry(QRect(620, 450, 101, 21));
        Nametag_7->setFont(font6);
        Nametag_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);\n"
"color:rgba(255,255,255,1);\n"
"border:none"));
        Nametag_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Nametag_8 = new QLabel(MenuCheat);
        Nametag_8->setObjectName("Nametag_8");
        Nametag_8->setGeometry(QRect(620, 470, 211, 31));
        Nametag_8->setFont(font7);
        Nametag_8->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);\n"
"color:rgba(255,255,255,1);\n"
"border:none"));
        Nametag_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        navi = new QFrame(MenuCheat);
        navi->setObjectName("navi");
        navi->setGeometry(QRect(0, 0, 1001, 31));
        navi->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0.8);"));
        navi->setFrameShape(QFrame::StyledPanel);
        navi->setFrameShadow(QFrame::Raised);
        minimize = new QPushButton(navi);
        minimize->setObjectName("minimize");
        minimize->setGeometry(QRect(940, 0, 31, 31));
        minimize->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/arrow-down-left.svg"), QSize(), QIcon::Normal, QIcon::Off);
        minimize->setIcon(icon1);
        exit = new QPushButton(navi);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(970, 0, 31, 31));
        exit->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/x.svg"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon2);
        label_6 = new QLabel(MenuCheat);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, -10, 341, 271));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/Raw.png")));
        label_6->setScaledContents(true);
        BG_LG = new QLabel(MenuCheat);
        BG_LG->setObjectName("BG_LG");
        BG_LG->setGeometry(QRect(0, 0, 1001, 591));
        QFont font8;
        font8.setPointSize(14);
        BG_LG->setFont(font8);
        BG_LG->setFocusPolicy(Qt::StrongFocus);
        BG_LG->setAutoFillBackground(true);
        BG_LG->setScaledContents(true);
        game1button = new QPushButton(MenuCheat);
        game1button->setObjectName("game1button");
        game1button->setGeometry(QRect(50, 270, 351, 51));
        QFont font9;
        font9.setPointSize(18);
        font9.setBold(true);
        game1button->setFont(font9);
        game1button->setLayoutDirection(Qt::LeftToRight);
        game1button->setAutoFillBackground(false);
        game1button->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0.3);\n"
"border-radius: 20;\n"
"color:rgba(255,255,255,1);\n"
"padding-left:5"));
        game2button = new QPushButton(MenuCheat);
        game2button->setObjectName("game2button");
        game2button->setGeometry(QRect(50, 340, 351, 51));
        game2button->setFont(font9);
        game2button->setLayoutDirection(Qt::LeftToRight);
        game2button->setAutoFillBackground(false);
        game2button->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0.3);\n"
"border-radius: 20;\n"
"color:rgba(255,255,255,1);\n"
"padding-left:5"));
        game3button = new QPushButton(MenuCheat);
        game3button->setObjectName("game3button");
        game3button->setGeometry(QRect(50, 410, 351, 51));
        game3button->setFont(font9);
        game3button->setLayoutDirection(Qt::LeftToRight);
        game3button->setAutoFillBackground(false);
        game3button->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0.3);\n"
"border-radius: 20;\n"
"color:rgba(255,255,255,1);\n"
"padding-left:5"));
        game4button = new QPushButton(MenuCheat);
        game4button->setObjectName("game4button");
        game4button->setGeometry(QRect(50, 480, 351, 51));
        game4button->setFont(font9);
        game4button->setLayoutDirection(Qt::LeftToRight);
        game4button->setAutoFillBackground(false);
        game4button->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0.3);\n"
"border-radius: 20;\n"
"color:rgba(255,255,255,1);\n"
"padding-left:5"));
        BG_LG->raise();
        label_2->raise();
        label_3->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        logo_cheat_3->raise();
        label_4->raise();
        label_5->raise();
        pushButton->raise();
        Nametag_2->raise();
        Nametag_3->raise();
        Nametag_4->raise();
        Nametag_5->raise();
        Nametag_6->raise();
        Nametag_7->raise();
        Nametag_8->raise();
        navi->raise();
        label_6->raise();
        game1button->raise();
        game2button->raise();
        game3button->raise();
        game4button->raise();

        retranslateUi(MenuCheat);

        QMetaObject::connectSlotsByName(MenuCheat);
    } // setupUi

    void retranslateUi(QDialog *MenuCheat)
    {
        MenuCheat->setWindowTitle(QCoreApplication::translate("MenuCheat", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("MenuCheat", "Look At deez nuts", nullptr));
        label_3->setText(QString());
        lineEdit_3->setText(QCoreApplication::translate("MenuCheat", "LOGGED IN AS", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("MenuCheat", "RAW", nullptr));
        logo_cheat_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        pushButton->setText(QCoreApplication::translate("MenuCheat", "LOAD", nullptr));
        Nametag_2->setText(QCoreApplication::translate("MenuCheat", "CS:GO", nullptr));
        Nametag_3->setText(QCoreApplication::translate("MenuCheat", "LAST UPDATE", nullptr));
        Nametag_4->setText(QCoreApplication::translate("MenuCheat", "3 days ago", nullptr));
        Nametag_5->setText(QCoreApplication::translate("MenuCheat", "SUBSCRIPTION", nullptr));
        Nametag_6->setText(QCoreApplication::translate("MenuCheat", "Until 02/11/2023 (6 months)", nullptr));
        Nametag_7->setText(QCoreApplication::translate("MenuCheat", "STATUS", nullptr));
        Nametag_8->setText(QCoreApplication::translate("MenuCheat", "Undetected", nullptr));
        minimize->setText(QString());
        exit->setText(QString());
        label_6->setText(QString());
        BG_LG->setText(QString());
        game1button->setText(QCoreApplication::translate("MenuCheat", "CS:GO", nullptr));
        game2button->setText(QCoreApplication::translate("MenuCheat", "Valorant", nullptr));
        game3button->setText(QCoreApplication::translate("MenuCheat", "Fortnite", nullptr));
        game4button->setText(QCoreApplication::translate("MenuCheat", "Apex Legends", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuCheat: public Ui_MenuCheat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUCHEAT_H
