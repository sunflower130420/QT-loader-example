#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "menucheat.h"
#include "signin.h"
#include <QPixmap>
#include <QPushButton>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private slots:
   void on_RegisterAcc_clicked();

   void on_SignIn_clicked();

   void minimizeApplication();

   void on_minimize_clicked();

   void on_exit_clicked();

private:
    Ui::MainWindow *ui;
    QPoint m_dragPosition;
    bool m_dragging;
    QPushButton *m_minimizeButton;
};
#endif // MAINWINDOW_H
