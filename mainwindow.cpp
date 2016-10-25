#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QGraphicsView* view;
    Frame firstFrame = project.getFrame(0);
    QPixmap image = QPixmap::fromImage(firstFrame);
    int opacity = 255;// Set this between 0 is transparent
    image.fill(QColor(255,0,0,opacity));
    //scales the image to Frame_2 need to move it.
    QPixmap imageZoomed = image.scaled(ui->frame_2->geometry().width(), ui->frame_2->geometry().height(),
                                       Qt::IgnoreAspectRatio, Qt::FastTransformation);

    //QTransform trans;
    //trans.translate(ui->frame_2->pos().x(), ui->frame_2->pos().y());
    //trans.translate(500000, 500000);
    //imageZoomed = imageZoomed.transformed(trans, Qt::FastTransformation);




    canvas = new QGraphicsScene(this);
    canvas ->addPixmap(imageZoomed);
    canvas->setSceneRect(image.rect());

    QBrush brush(QColor(0, 0, 0, 150));
    canvas->setBackgroundBrush(brush);

    view = new QGraphicsView(canvas);


    ui->drawingGridLayout->addWidget(view);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LineButton_clicked()
{

}
