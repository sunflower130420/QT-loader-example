/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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
    QHBoxLayout *horizontalLayout;
    QFrame *slide_menu_container;
    QVBoxLayout *verticalLayout_2;
    QFrame *slide_menu;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_6;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout_7;
    QFrame *frame_10;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_9;
    QFrame *frame_11;
    QVBoxLayout *verticalLayout_10;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QLabel *label_4;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *exit_button;
    QFrame *main_body;
    QVBoxLayout *verticalLayout;
    QFrame *header_frame;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *open_close_side_bar_btn;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit;
    QPushButton *pushButton_6;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *minimize_window_button;
    QPushButton *restore_window_button;
    QPushButton *close_window_button;
    QFrame *main_body_contents;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_5;
    QLabel *label_6;
    QFrame *footer;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_7;
    QFrame *size_grip;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(568, 357);
        MainWindow->setStyleSheet(QString::fromUtf8("*{\n"
"	border: none;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(24, 24, 36);"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        slide_menu_container = new QFrame(centralwidget);
        slide_menu_container->setObjectName("slide_menu_container");
        slide_menu_container->setMinimumSize(QSize(0, 0));
        slide_menu_container->setMaximumSize(QSize(0, 16777215));
        slide_menu_container->setStyleSheet(QString::fromUtf8("background-color: rgb(9, 5, 13);"));
        slide_menu_container->setFrameShape(QFrame::StyledPanel);
        slide_menu_container->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(slide_menu_container);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        slide_menu = new QFrame(slide_menu_container);
        slide_menu->setObjectName("slide_menu");
        slide_menu->setMinimumSize(QSize(196, 0));
        slide_menu->setFrameShape(QFrame::StyledPanel);
        slide_menu->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(slide_menu);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        frame_7 = new QFrame(slide_menu);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_7);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_2 = new QLabel(frame_7);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_2->setFont(font);

        horizontalLayout_8->addWidget(label_2, 0, Qt::AlignLeft|Qt::AlignTop);

        label_3 = new QLabel(frame_7);
        label_3->setObjectName("label_3");
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/twitter.svg")));

        horizontalLayout_8->addWidget(label_3, 0, Qt::AlignLeft|Qt::AlignTop);


        verticalLayout_5->addWidget(frame_7, 0, Qt::AlignTop);

        frame_8 = new QFrame(slide_menu);
        frame_8->setObjectName("frame_8");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_8->sizePolicy().hasHeightForWidth());
        frame_8->setSizePolicy(sizePolicy);
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_8);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        toolBox = new QToolBox(frame_8);
        toolBox->setObjectName("toolBox");
        toolBox->setStyleSheet(QString::fromUtf8("QToolBox{\n"
"	background-color: rgb(24, 24, 36);\n"
"	text-align: left;\n"
"}\n"
"QToolBox::tab {\n"
"    border-radius: 5px;	\n"
"	background-color: rgb(17, 16, 26);\n"
"	text-align: left;\n"
"}"));
        page = new QWidget();
        page->setObjectName("page");
        page->setGeometry(QRect(0, 0, 196, 231));
        verticalLayout_7 = new QVBoxLayout(page);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        frame_10 = new QFrame(page);
        frame_10->setObjectName("frame_10");
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(frame_10);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButton_10 = new QPushButton(frame_10);
        pushButton_10->setObjectName("pushButton_10");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/alert-triangle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon);
        pushButton_10->setIconSize(QSize(16, 16));

        verticalLayout_8->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(frame_10);
        pushButton_11->setObjectName("pushButton_11");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/bar-chart-2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_11->setIcon(icon1);

        verticalLayout_8->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(frame_10);
        pushButton_12->setObjectName("pushButton_12");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/key.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon2);

        verticalLayout_8->addWidget(pushButton_12);


        verticalLayout_7->addWidget(frame_10, 0, Qt::AlignTop);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/chevron-down.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page, icon3, QString::fromUtf8("Drop Menu 1"));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setGeometry(QRect(0, 0, 196, 231));
        verticalLayout_9 = new QVBoxLayout(page_2);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        frame_11 = new QFrame(page_2);
        frame_11->setObjectName("frame_11");
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(frame_11);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        pushButton_13 = new QPushButton(frame_11);
        pushButton_13->setObjectName("pushButton_13");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/printer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_13->setIcon(icon4);

        verticalLayout_10->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(frame_11);
        pushButton_14->setObjectName("pushButton_14");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/phone-incoming.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_14->setIcon(icon5);

        verticalLayout_10->addWidget(pushButton_14);


        verticalLayout_9->addWidget(frame_11, 0, Qt::AlignTop);

        label_4 = new QLabel(page_2);
        label_4->setObjectName("label_4");
        label_4->setWordWrap(true);

        verticalLayout_9->addWidget(label_4, 0, Qt::AlignTop);

        toolBox->addItem(page_2, icon3, QString::fromUtf8("Drop Menu 2"));

        verticalLayout_6->addWidget(toolBox);


        verticalLayout_5->addWidget(frame_8);

        frame_9 = new QFrame(slide_menu);
        frame_9->setObjectName("frame_9");
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_9);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        exit_button = new QPushButton(frame_9);
        exit_button->setObjectName("exit_button");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/external-link.svg"), QSize(), QIcon::Normal, QIcon::Off);
        exit_button->setIcon(icon6);
        exit_button->setIconSize(QSize(16, 16));

        horizontalLayout_9->addWidget(exit_button, 0, Qt::AlignLeft|Qt::AlignBottom);


        verticalLayout_5->addWidget(frame_9, 0, Qt::AlignBottom);


        verticalLayout_2->addWidget(slide_menu);


        horizontalLayout->addWidget(slide_menu_container);

        main_body = new QFrame(centralwidget);
        main_body->setObjectName("main_body");
        main_body->setFrameShape(QFrame::StyledPanel);
        main_body->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(main_body);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        header_frame = new QFrame(main_body);
        header_frame->setObjectName("header_frame");
        header_frame->setStyleSheet(QString::fromUtf8("background-color: rgb(9, 5, 13);"));
        header_frame->setFrameShape(QFrame::StyledPanel);
        header_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(header_frame);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(6, 6, 6, 6);
        frame_6 = new QFrame(header_frame);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_6);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        open_close_side_bar_btn = new QPushButton(frame_6);
        open_close_side_bar_btn->setObjectName("open_close_side_bar_btn");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/align-left.svg"), QSize(), QIcon::Normal, QIcon::Off);
        open_close_side_bar_btn->setIcon(icon7);
        open_close_side_bar_btn->setIconSize(QSize(32, 32));

        horizontalLayout_7->addWidget(open_close_side_bar_btn, 0, Qt::AlignLeft|Qt::AlignTop);


        horizontalLayout_2->addWidget(frame_6, 0, Qt::AlignLeft|Qt::AlignTop);

        frame_3 = new QFrame(header_frame);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_3);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(frame_3);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(135, 0));
        lineEdit->setStyleSheet(QString::fromUtf8("border-bottom: 3px solid rgb(230, 5, 64);"));

        horizontalLayout_6->addWidget(lineEdit, 0, Qt::AlignLeft);

        pushButton_6 = new QPushButton(frame_3);
        pushButton_6->setObjectName("pushButton_6");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icons/search.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon8);

        horizontalLayout_6->addWidget(pushButton_6, 0, Qt::AlignLeft);


        horizontalLayout_2->addWidget(frame_3, 0, Qt::AlignLeft|Qt::AlignTop);

        frame_2 = new QFrame(header_frame);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_2);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(frame_2);
        pushButton_5->setObjectName("pushButton_5");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/icons/user.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon9);

        horizontalLayout_5->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName("pushButton_4");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/icons/bell.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon10);

        horizontalLayout_5->addWidget(pushButton_4);


        horizontalLayout_2->addWidget(frame_2, 0, Qt::AlignHCenter|Qt::AlignTop);

        frame = new QFrame(header_frame);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        minimize_window_button = new QPushButton(frame);
        minimize_window_button->setObjectName("minimize_window_button");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/icons/arrow-down-left.svg"), QSize(), QIcon::Normal, QIcon::Off);
        minimize_window_button->setIcon(icon11);

        horizontalLayout_4->addWidget(minimize_window_button);

        restore_window_button = new QPushButton(frame);
        restore_window_button->setObjectName("restore_window_button");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/icons/maximize-2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        restore_window_button->setIcon(icon12);

        horizontalLayout_4->addWidget(restore_window_button);

        close_window_button = new QPushButton(frame);
        close_window_button->setObjectName("close_window_button");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/icons/x.svg"), QSize(), QIcon::Normal, QIcon::Off);
        close_window_button->setIcon(icon13);

        horizontalLayout_4->addWidget(close_window_button);


        horizontalLayout_2->addWidget(frame, 0, Qt::AlignRight|Qt::AlignTop);


        verticalLayout->addWidget(header_frame, 0, Qt::AlignTop);

        main_body_contents = new QFrame(main_body);
        main_body_contents->setObjectName("main_body_contents");
        sizePolicy.setHeightForWidth(main_body_contents->sizePolicy().hasHeightForWidth());
        main_body_contents->setSizePolicy(sizePolicy);
        main_body_contents->setFrameShape(QFrame::StyledPanel);
        main_body_contents->setFrameShadow(QFrame::Raised);
        verticalLayout_11 = new QVBoxLayout(main_body_contents);
        verticalLayout_11->setObjectName("verticalLayout_11");
        label_5 = new QLabel(main_body_contents);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(60, 60));
        label_5->setMaximumSize(QSize(60, 60));
        label_5->setStyleSheet(QString::fromUtf8("border: 5px solid rgb(230, 5, 64);\n"
"border-radius: 30px;"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/github.svg")));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_5, 0, Qt::AlignHCenter|Qt::AlignBottom);

        label_6 = new QLabel(main_body_contents);
        label_6->setObjectName("label_6");
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_6, 0, Qt::AlignHCenter|Qt::AlignTop);


        verticalLayout->addWidget(main_body_contents);

        footer = new QFrame(main_body);
        footer->setObjectName("footer");
        footer->setFrameShape(QFrame::StyledPanel);
        footer->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(footer);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(footer);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_4);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame_4);
        label->setObjectName("label");

        verticalLayout_4->addWidget(label, 0, Qt::AlignBottom);


        horizontalLayout_3->addWidget(frame_4);

        frame_5 = new QFrame(footer);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_5);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(frame_5);
        pushButton_7->setObjectName("pushButton_7");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/icons/box.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon14);

        verticalLayout_3->addWidget(pushButton_7, 0, Qt::AlignBottom);


        horizontalLayout_3->addWidget(frame_5);

        size_grip = new QFrame(footer);
        size_grip->setObjectName("size_grip");
        size_grip->setMinimumSize(QSize(10, 10));
        size_grip->setMaximumSize(QSize(10, 10));
        size_grip->setFrameShape(QFrame::StyledPanel);
        size_grip->setFrameShadow(QFrame::Raised);

        horizontalLayout_3->addWidget(size_grip, 0, Qt::AlignRight|Qt::AlignBottom);


        verticalLayout->addWidget(footer, 0, Qt::AlignBottom);


        horizontalLayout->addWidget(main_body);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "APP NAME", nullptr));
        label_3->setText(QString());
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "ITEM 1", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "ITEM 2", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "ITEM 3", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("MainWindow", "Drop Menu 1", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "SUB MENU", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "SUB MENU", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Some text you would like to fill here", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("MainWindow", "Drop Menu 2", nullptr));
        exit_button->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        open_close_side_bar_btn->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        pushButton_6->setText(QString());
        pushButton_5->setText(QString());
        pushButton_4->setText(QString());
        minimize_window_button->setText(QString());
        restore_window_button->setText(QString());
        close_window_button->setText(QString());
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "GITHUB", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Modern UI v 7.7.7", nullptr));
        pushButton_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
