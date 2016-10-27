#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "slideframe.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //std::cout<<ui->frame_2->geometry().width()<<std::endl;

    SlideFrame* test;
    test = new SlideFrame(ui->frame_2, new QImage);

    ////firstFrame = project.getFrame(0);
    // to view frame, use QPixmap
    ////QPixmap image = QPixmap::fromImage(firstFrame);
    QPixmap image = QPixmap::fromImage(*test->getImage());
    QBrush brush(QColor(255, 0, 0, 255));

    int opacity = 255;// Set this between 0-255, 0 is transparent
    image.fill(QColor(255,0,0,opacity));

    //scales the image to Frame_2 need to move it.
    QPixmap imageZoomed = image.scaled(test->geometry().width(), test->geometry().height(),Qt::IgnoreAspectRatio, Qt::FastTransformation);


    // holds image QPixmap
    canvas = new QGraphicsScene(this);
    view = new QGraphicsView(test);

    // pixMap (QGraphicsPixmapItem) holds the canvas (QGraphics Scene)
    pixMap = canvas ->addPixmap(imageZoomed);

    canvas->setSceneRect(imageZoomed.rect());
    canvas->setBackgroundBrush(brush);

    view->setScene(canvas);
    view->scale(.8523, .8523);

    ui->drawingGridLayout->addWidget(test);

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
