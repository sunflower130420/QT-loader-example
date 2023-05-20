QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    menucheat.cpp \
    signin.cpp \
    signout.cpp

HEADERS += \
    mainwindow.h \
    menucheat.h \
    signin.h \
    signout.h \
    xorstr.hpp

FORMS += \
    interface.ui \
    mainwindow.ui \
    menucheat.ui \
    signin.ui \
    signout.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    icons/Background_Login.png \
    icons/Background_Logout.png \
    icons/Background_cheat.png \
    icons/arrow-down-left.svg \
    icons/arrow-down.svg \
    icons/github.svg \
    icons/logo.png \
    icons/x.svg

RESOURCES += \
    resource.qrc
