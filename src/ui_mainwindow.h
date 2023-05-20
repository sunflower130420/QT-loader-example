/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *BG_LG;
    QFrame *slide_menu_2;
    QVBoxLayout *verticalLayout_13;
    QFrame *frame_12;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QLabel *label_8;
    QFrame *frame_13;
    QVBoxLayout *verticalLayout_14;
    QToolBox *toolBox_2;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_15;
    QFrame *frame_14;
    QVBoxLayout *verticalLayout_16;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_17;
    QFrame *frame_15;
    QVBoxLayout *verticalLayout_18;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QLabel *label_9;
    QFrame *frame_16;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *exit_button_2;
    QFrame *slide_menu_container;
    QVBoxLayout *verticalLayout_12;
    QLabel *Form;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *Pass;
    QCheckBox *checkBox;
    QPushButton *RegisterAcc;
    QLineEdit *lineEdit_2;
    QPushButton *SignIn;
    QFrame *navi;
    QPushButton *minimize;
    QPushButton *exit;
    QLabel *label;
    QLineEdit *ConfirmPass;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 587);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        BG_LG = new QLabel(centralwidget);
        BG_LG->setObjectName("BG_LG");
        BG_LG->setGeometry(QRect(-18, -11, 1171, 601));
        BG_LG->setText(QString::fromUtf8(""));
        BG_LG->setTextFormat(Qt::PlainText);
        BG_LG->setScaledContents(true);
        slide_menu_2 = new QFrame(centralwidget);
        slide_menu_2->setObjectName("slide_menu_2");
        slide_menu_2->setGeometry(QRect(350, 70, 196, 0));
        slide_menu_2->setMinimumSize(QSize(196, 0));
        slide_menu_2->setFrameShape(QFrame::StyledPanel);
        slide_menu_2->setFrameShadow(QFrame::Raised);
        verticalLayout_13 = new QVBoxLayout(slide_menu_2);
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        frame_12 = new QFrame(slide_menu_2);
        frame_12->setObjectName("frame_12");
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(frame_12);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_7 = new QLabel(frame_12);
        label_7->setObjectName("label_7");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_7->setFont(font);

        horizontalLayout_10->addWidget(label_7, 0, Qt::AlignLeft|Qt::AlignTop);

        label_8 = new QLabel(frame_12);
        label_8->setObjectName("label_8");
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/twitter.svg")));

        horizontalLayout_10->addWidget(label_8, 0, Qt::AlignLeft|Qt::AlignTop);


        verticalLayout_13->addWidget(frame_12, 0, Qt::AlignTop);

        frame_13 = new QFrame(slide_menu_2);
        frame_13->setObjectName("frame_13");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_13->sizePolicy().hasHeightForWidth());
        frame_13->setSizePolicy(sizePolicy);
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        verticalLayout_14 = new QVBoxLayout(frame_13);
        verticalLayout_14->setSpacing(0);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        toolBox_2 = new QToolBox(frame_13);
        toolBox_2->setObjectName("toolBox_2");
        toolBox_2->setStyleSheet(QString::fromUtf8("QToolBox{\n"
"	background-color: rgb(24, 24, 36);\n"
"	text-align: left;\n"
"}\n"
"QToolBox::tab {\n"
"    border-radius: 5px;	\n"
"	background-color: rgb(17, 16, 26);\n"
"	text-align: left;\n"
"}"));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        page_3->setGeometry(QRect(0, 0, 178, 74));
        verticalLayout_15 = new QVBoxLayout(page_3);
        verticalLayout_15->setSpacing(0);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        frame_14 = new QFrame(page_3);
        frame_14->setObjectName("frame_14");
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        verticalLayout_16 = new QVBoxLayout(frame_14);
        verticalLayout_16->setSpacing(0);
        verticalLayout_16->setObjectName("verticalLayout_16");
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        pushButton_15 = new QPushButton(frame_14);
        pushButton_15->setObjectName("pushButton_15");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/alert-triangle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_15->setIcon(icon);
        pushButton_15->setIconSize(QSize(16, 16));

        verticalLayout_16->addWidget(pushButton_15);

        pushButton_16 = new QPushButton(frame_14);
        pushButton_16->setObjectName("pushButton_16");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/bar-chart-2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_16->setIcon(icon1);

        verticalLayout_16->addWidget(pushButton_16);

        pushButton_17 = new QPushButton(frame_14);
        pushButton_17->setObjectName("pushButton_17");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/key.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_17->setIcon(icon2);

        verticalLayout_16->addWidget(pushButton_17);


        verticalLayout_15->addWidget(frame_14, 0, Qt::AlignTop);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/chevron-down.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox_2->addItem(page_3, icon3, QString::fromUtf8("Drop Menu 1"));
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        page_4->setGeometry(QRect(0, 0, 178, 82));
        verticalLayout_17 = new QVBoxLayout(page_4);
        verticalLayout_17->setSpacing(0);
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        frame_15 = new QFrame(page_4);
        frame_15->setObjectName("frame_15");
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        verticalLayout_18 = new QVBoxLayout(frame_15);
        verticalLayout_18->setSpacing(0);
        verticalLayout_18->setObjectName("verticalLayout_18");
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        pushButton_18 = new QPushButton(frame_15);
        pushButton_18->setObjectName("pushButton_18");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/printer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_18->setIcon(icon4);

        verticalLayout_18->addWidget(pushButton_18);

        pushButton_19 = new QPushButton(frame_15);
        pushButton_19->setObjectName("pushButton_19");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/phone-incoming.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_19->setIcon(icon5);

        verticalLayout_18->addWidget(pushButton_19);


        verticalLayout_17->addWidget(frame_15, 0, Qt::AlignTop);

        label_9 = new QLabel(page_4);
        label_9->setObjectName("label_9");
        label_9->setWordWrap(true);

        verticalLayout_17->addWidget(label_9, 0, Qt::AlignTop);

        toolBox_2->addItem(page_4, icon3, QString::fromUtf8("Drop Menu 2"));

        verticalLayout_14->addWidget(toolBox_2);


        verticalLayout_13->addWidget(frame_13);

        frame_16 = new QFrame(slide_menu_2);
        frame_16->setObjectName("frame_16");
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(frame_16);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        exit_button_2 = new QPushButton(frame_16);
        exit_button_2->setObjectName("exit_button_2");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/external-link.svg"), QSize(), QIcon::Normal, QIcon::Off);
        exit_button_2->setIcon(icon6);
        exit_button_2->setIconSize(QSize(16, 16));

        horizontalLayout_11->addWidget(exit_button_2, 0, Qt::AlignLeft|Qt::AlignBottom);


        verticalLayout_13->addWidget(frame_16, 0, Qt::AlignBottom);

        slide_menu_container = new QFrame(centralwidget);
        slide_menu_container->setObjectName("slide_menu_container");
        slide_menu_container->setGeometry(QRect(-20, 40, 0, 0));
        slide_menu_container->setMinimumSize(QSize(0, 0));
        slide_menu_container->setMaximumSize(QSize(0, 16777215));
        slide_menu_container->setStyleSheet(QString::fromUtf8("background-color: rgb(9, 5, 13);"));
        slide_menu_container->setFrameShape(QFrame::StyledPanel);
        slide_menu_container->setFrameShadow(QFrame::Raised);
        verticalLayout_12 = new QVBoxLayout(slide_menu_container);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        Form = new QLabel(centralwidget);
        Form->setObjectName("Form");
        Form->setGeometry(QRect(280, 40, 471, 511));
        Form->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0.6);\n"
"border-radius: 20"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(330, 180, 471, 51));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgba(255,255,255,1)"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(320, 250, 381, 41));
        QFont font2;
        font2.setBold(true);
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0.2);\n"
"border-radius: 20;\n"
"color:rgba(255,255,255,1);\n"
"padding-left:5\n"
""));
        lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Pass = new QLineEdit(centralwidget);
        Pass->setObjectName("Pass");
        Pass->setGeometry(QRect(320, 310, 381, 41));
        Pass->setFont(font2);
        Pass->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0.2);\n"
"border-radius: 20;\n"
"color:rgba(255,255,255,1);\n"
"padding-left:5\n"
""));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(330, 430, 381, 21));
        checkBox->setFont(font2);
        checkBox->setStyleSheet(QString::fromUtf8("color:rgba(255,255,255,1);"));
        checkBox->setTristate(false);
        RegisterAcc = new QPushButton(centralwidget);
        RegisterAcc->setObjectName("RegisterAcc");
        RegisterAcc->setGeometry(QRect(330, 460, 361, 41));
        RegisterAcc->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,139,0.5);\n"
"border-radius: 20;\n"
"color:rgba(255,255,255,1);"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(360, 510, 191, 31));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setUnderline(true);
        lineEdit_2->setFont(font3);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);\n"
"color:rgba(255,255,255,1);\n"
"border:none"));
        lineEdit_2->setAlignment(Qt::AlignCenter);
        SignIn = new QPushButton(centralwidget);
        SignIn->setObjectName("SignIn");
        SignIn->setGeometry(QRect(520, 510, 71, 31));
        QFont font4;
        font4.setBold(true);
        font4.setUnderline(true);
        SignIn->setFont(font4);
        SignIn->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);\n"
"color:rgba(255,255,255,1);"));
        navi = new QFrame(centralwidget);
        navi->setObjectName("navi");
        navi->setGeometry(QRect(0, 0, 1001, 31));
        navi->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0.8);"));
        navi->setFrameShape(QFrame::StyledPanel);
        navi->setFrameShadow(QFrame::Raised);
        minimize = new QPushButton(navi);
        minimize->setObjectName("minimize");
        minimize->setGeometry(QRect(940, 0, 31, 31));
        minimize->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/arrow-down-left.svg"), QSize(), QIcon::Normal, QIcon::Off);
        minimize->setIcon(icon7);
        exit = new QPushButton(navi);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(970, 0, 31, 31));
        exit->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icons/x.svg"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon8);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 0, 341, 271));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/Raw.png")));
        label->setScaledContents(true);
        ConfirmPass = new QLineEdit(centralwidget);
        ConfirmPass->setObjectName("ConfirmPass");
        ConfirmPass->setGeometry(QRect(320, 370, 381, 41));
        ConfirmPass->setFont(font2);
        ConfirmPass->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0.2);\n"
"border-radius: 20;\n"
"color:rgba(255,255,255,1);\n"
"padding-left:5\n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        toolBox_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "APP NAME", nullptr));
        label_8->setText(QString());
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "ITEM 1", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "ITEM 2", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "ITEM 3", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_3), QCoreApplication::translate("MainWindow", "Drop Menu 1", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "SUB MENU", nullptr));
        pushButton_19->setText(QCoreApplication::translate("MainWindow", "SUB MENU", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Some text you would like to fill here", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_4), QCoreApplication::translate("MainWindow", "Drop Menu 2", nullptr));
        exit_button_2->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        Form->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Next-Level Game Re-Engineering", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        Pass->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "I agree to Terms of Service and Privacy Policy", nullptr));
        RegisterAcc->setText(QCoreApplication::translate("MainWindow", "Join ElppaGnoD Now!", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "Already have an account? ", nullptr));
        SignIn->setText(QCoreApplication::translate("MainWindow", "Sign in!", nullptr));
        minimize->setText(QString());
        exit->setText(QString());
        label->setText(QString());
        ConfirmPass->setText(QString());
        ConfirmPass->setPlaceholderText(QCoreApplication::translate("MainWindow", "Confirm Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
