#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QDebug>
#include <QAction>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_action_4_triggered();            //справка

    void on_Exit_clicked();

    void on_action_3_triggered();            //о программе

    void on_Game1_clicked();                 //открытие нового окна с игрой "Тетрис"

    void on_Game3_clicked();                 //открытие окна с игрой "Змейка"

    void on_Game4_clicked();                 //открытие окна с игрой "Пинг-понг"

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
