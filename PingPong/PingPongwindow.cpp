#include "PingPongwindow.h"
#include "ui_PingPongwindow.h"
#include <QGraphicsScene>
#include <QTimer>
#include <QGraphicsRectItem>
#include <QMessageBox>
#include <QGraphicsEllipseItem>
#include "move.h"
#include <QPen>
#include <QResizeEvent>
#include <QDebug>

PingWindow::PingWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::PingWindow),
    Score ( 0 )
{
    ui->setupUi(this);//установка пользовательского интерфейса
    QGraphicsScene *scene = new QGraphicsScene(this);

    QGraphicsRectItem *p1 = new QGraphicsRectItem(0, 0, 80, 20);
    p1->setBrush(QBrush(Qt::black));
    QGraphicsRectItem *p2 = new QGraphicsRectItem(0, 0, 80, 20);
    p2->setBrush(QBrush(Qt::cyan));

    QGraphicsEllipseItem *ball = new QGraphicsEllipseItem(0, 0, 15, 15);
    ball->setBrush(QBrush(Qt::blue));

    ui->boardView->setScene(scene);

    Loop = new Moving(*scene, p1, p2, ball, this);
    QSize (scene->sceneRect().size().width() + 10, scene->sceneRect().size().height() + 10);//задание размеров игрового окна
    ui->boardView->installEventFilter(Loop);

    QObject::connect(Loop, SIGNAL(goal(int)),
                     this, SLOT(addScore(int)));
}

PingWindow::~PingWindow()
{
    delete ui;
}

void PingWindow::addScore(int count)//функция подсчета очков
{
    Score += count;
    if ( Score == -10 || Score == 10)
    {
        QMessageBox * msgBox = new QMessageBox();
        msgBox->setText("Vi proigrali!");
        msgBox->show();
        delete Loop;
    }
    ui->lcdNumber->display(Score);
}

