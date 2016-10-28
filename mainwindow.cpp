#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QDebug>
#include <slideview.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Creates and empty graphicsview to act as the parent for the SlideView
    view = new QGraphicsView();

    //Creates a slide view: extended qGraphicsView with view as its parent
    SlideView* theView;
    theView = new SlideView(view);

    //Adds a the extended slideview to the layout for frame_2
    ui->drawingGridLayout->addWidget(theView);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LineButton_clicked()
{
//    QRgb value = qRgba(0, 0, 255, 255);
//    firstFrame.setPixel(1,1,value);
//    QPixmap image = QPixmap::fromImage(firstFrame);
//    //int opacity = 255;// Set this between 0 is transparent
//    //image.fill(QColor(0,0,255,opacity));
//    //scales the image to Frame_2 need to move it.
//    QPixmap imageZoomed = image.scaled(ui->frame_2->geometry().width(), ui->frame_2->geometry().height(),
//                                       Qt::IgnoreAspectRatio, Qt::FastTransformation);

//    pixMap->setPixmap(imageZoomed);




}

//void MainWindow::mousePressEvent(QMouseEvent *event)
//{
//    start = event->pos();
//
//}
//
//void MainWindow::mouseMoveEvent(QMouseEvent *event){

//    QPainter paint((QPaintDevice)firstFrame);
//    paint.drawLine(start, event->pos());
//    QPixmap image = QPixmap::fromImage(firstFrame);
//    QPixmap imageZoomed = image.scaled(ui->frame_2->geometry().width(), ui->frame_2->geometry().height(),
//                                       Qt::IgnoreAspectRatio, Qt::FastTransformation);

//    pixMap->setPixmap(imageZoomed);

//}

//void MainWindow::mouseReleaseEvent(QMouseEvent *event){
//    MainWindow::mouseReleaseEvent(event);
//}
