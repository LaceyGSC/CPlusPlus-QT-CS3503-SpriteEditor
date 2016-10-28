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


}

