#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //std::cout<<ui->frame_2->geometry().width()<<std::endl;


    firstFrame = project.getFrame(0);
    // to view frame, use QPixmap
    QPixmap image = QPixmap::fromImage(firstFrame);
    int opacity = 255;// Set this between 0 is transparent
    image.fill(QColor(255,0,0,opacity));
    //scales the image to Frame_2 need to move it.
    QPixmap imageZoomed = image.scaled(ui->frame_2->geometry().width(), ui->frame_2->geometry().height(),
                                       Qt::IgnoreAspectRatio, Qt::FastTransformation);



    // holds image QPixmap
    canvas = new QGraphicsScene(this);
    // pixMap (QGraphicsPixmapItem) holds the canvas (QGraphics Scene)
    pixMap = canvas ->addPixmap(imageZoomed);
    canvas->setSceneRect(imageZoomed.rect());

    QBrush brush(QColor(0, 0, 0, 150));
    canvas->setBackgroundBrush(brush);

    view = new QGraphicsView(canvas);


    ui->drawingGridLayout->addWidget(view);

    view->scale(.8523, .8523);
    //view->fitInView(canvas->itemsBoundingRect(), Qt::IgnoreAspectRatio);
    //view->scale(wFrame, hFrame);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LineButton_clicked()
{
    QRgb value = qRgba(0, 0, 255, 255);
    firstFrame.setPixel(1,1,value);
    QPixmap image = QPixmap::fromImage(firstFrame);
    //int opacity = 255;// Set this between 0 is transparent
    //image.fill(QColor(0,0,255,opacity));
    //scales the image to Frame_2 need to move it.
    QPixmap imageZoomed = image.scaled(ui->frame_2->geometry().width(), ui->frame_2->geometry().height(),
                                       Qt::IgnoreAspectRatio, Qt::FastTransformation);

    pixMap->setPixmap(imageZoomed);


}
