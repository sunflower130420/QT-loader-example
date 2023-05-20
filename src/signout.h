#ifndef SIGNOUT_H
#define SIGNOUT_H

#include <QDialog>
#include "menucheat.h"
#include "signin.h"
#include <QPixmap>
#include <QPushButton>
namespace Ui {
class SignOut;
}

class SignOut : public QDialog
{
    Q_OBJECT

public:
    explicit SignOut(QWidget *parent = nullptr);
    ~SignOut();

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private slots:

    void on_RegisterAcc_Sout_clicked();

    void on_SignIn_Sout_clicked();

    void minimizeApplicationSO();

    void on_minimize_clicked();

    void on_exit_clicked();

private:
    Ui::SignOut *ui;
    QPoint m_dragPosition;
    bool m_dragging;
    QPushButton *m_minimizeButton;
};

#endif // SIGNOUT_H
