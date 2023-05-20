#ifndef SIGNIN_H
#define SIGNIN_H

#include <QDialog>
#include "menucheat.h"
#include "mainwindow.h"
#include "signout.h"
#include <QPixmap>
#include <QPushButton>
namespace Ui {
class SignIn;
}

class SignIn : public QDialog
{
    Q_OBJECT

public:
    explicit SignIn(QWidget *parent = nullptr);
    ~SignIn();

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private slots:
    void on_Sign_in_clicked();

    void on_SignUp_clicked();

    void on_LGin_clicked();

    void minimizeApplicationSG();

    void on_minimize_clicked();

    void on_exit_clicked();

private:
    Ui::SignIn *ui;
    MenuCheat *menucheat;
    QPoint m_dragPosition;
    bool m_dragging;
    QPushButton *m_minimizeButton;
};

#endif // SIGNIN_H
