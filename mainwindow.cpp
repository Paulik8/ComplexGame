#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFile>
#include <QErrorMessage>
#include <QString>
#include "Tetris/tetrixwindow.h"
#include "Snake/widget.h"
#include "PingPong/PPwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_4_triggered()
{


    QMessageBox msgBox;
    msgBox.setWindowTitle("Справка");
    msgBox.setText("Приветствуем Вас в игре \"ТехноТет\"и желаем приятных впечатлений\n\n"\
                   "3 игры:\n\n\n"\
                   "Тетрис: Необходимо удалить как можно больше линий\n"\
                   "Управление: поворот фигуры стрелками клавиатуры, опустить - Space\n\n"\
                   "Змейка: \"Съесть\" как можно больше еды\n"\
                   "Управление: повороты змейки - клавиши W|A|S|D\n\n"
                   "Пинг-Понг: Необходимо набрать 10 очков\nОчки убавляются на одно, если вам забили\n"\
                   "Управление: стрелки клавиатуры\n\n"\
                  );
    msgBox.exec();

}

void MainWindow::on_Exit_clicked()
{
    this->close();
}

void MainWindow::on_action_3_triggered()
{
    QMessageBox * msgBox = new QMessageBox();
    msgBox->setWindowTitle("О программе");
    msgBox->setText("ТехноТет\nVersion 1.1, 26 июня\n2017\n");
    msgBox->exec();
}

void MainWindow::on_Game1_clicked()
{
    TetrixWindow * tetr = new TetrixWindow();
    tetr->show();
}

void MainWindow::on_Game3_clicked()
{
    Widget * sn = new Widget();
    sn->show();
}

void MainWindow::on_Game4_clicked()
{
    PingWindow * pp = new PingWindow();
    pp->show();
}
