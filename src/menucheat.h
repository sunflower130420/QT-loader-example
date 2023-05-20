#ifndef MENUCHEAT_H
#define MENUCHEAT_H

#include <QDialog>
#include <QPixmap>
#include <QPushButton>
namespace Ui {
class MenuCheat;
}

class MenuCheat : public QDialog
{
    Q_OBJECT

public:
    explicit MenuCheat(QWidget *parent = nullptr);
    ~MenuCheat();

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private slots:
    void on_minimize_clicked();

    void minimizeApplicationCheat();

    void on_exit_clicked();


    void on_pushButton_pressed();

    void on_pushButton_released();

    void on_game1button_pressed();
    void on_game1button_released();
    void on_game2button_pressed();
    void on_game2button_released();
    void on_game3button_pressed();
    void on_game3button_released();
    void on_game4button_pressed();
    void on_game4button_released();

private:
    Ui::MenuCheat *ui;
    QPoint m_dragPosition;
    bool m_dragging;
    QPushButton *m_minimizeButton;

};

#endif // MENUCHEAT_H
