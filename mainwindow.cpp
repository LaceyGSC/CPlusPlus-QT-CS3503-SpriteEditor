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

    theView = new SlideView(view);

    theView->setFill(false);

    //set spinboxes range
    ui->shapeWidthSlide->setRange(1, theView->getImage().width());
    ui->paintWidthSlide->setRange(1, theView->getImage().width());
    ui->paintWidthSpin->setRange(1, theView->getImage().width());
    ui->shapeWidthSpin->setRange(1, theView->getImage().width());

    //Adds a the extended slideview to the layout for frame_2
    ui->drawingGridLayout->addWidget(theView);

    connect(this, &MainWindow::undoSignal, theView, &SlideView::undoSlot);
    connect(this, &MainWindow::redoSignal, theView, &SlideView::redoSlot);
    connect(this, &MainWindow::rotateLeftSignal, theView, &SlideView::rotateLeftSlot);
    connect(this, &MainWindow::rotateRightSignal, theView, &SlideView::rotateRightSlot);
    connect(this, &MainWindow::flipHorizontalSignal, theView, &SlideView::flipHorizontalSlot);
    connect(this, &MainWindow::flipVerticalSignal, theView, &SlideView::flipVerticalSlot);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LineButton_clicked()
{
    std::string line = "line";
    theView->setTool(line);
    std::cout<<"reached"<<std::endl;

}

// bring back the image that the user made after they released the mouse
void MainWindow::on_actionUndo_triggered()
{
    emit undoSignal();
}

void MainWindow::on_actionRedo_triggered()
{
    emit redoSignal();
}

void MainWindow::on_RotateLeftButton_clicked()
{
    emit rotateLeftSignal();
}


void MainWindow::on_RotateRightButton_clicked()
{
    emit rotateRightSignal();
}

void MainWindow::on_FlipHorzButton_clicked()
{
    emit flipHorizontalSignal();
}

void MainWindow::on_FlipVertButton_clicked()
{
    emit flipVerticalSignal();
}

void MainWindow::on_CircleButton_clicked()
{
    theView->setTool("circle");
}

void MainWindow::on_SquareButton_clicked()
{
    theView->setTool("rect");
    //ui->SquareButton->
}

//DO NOT DELETE CODE BREAKS IF DELETED

void MainWindow::on_checkBox_stateChanged(int arg1)
{

}

void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
    std::cout<<"here"<<std::endl;
    if(arg1 == 0){
        theView->setFill(false);
    }
    if(arg1 == 2){
        theView->setFill(true);
    }

}

void MainWindow::on_PenButton_clicked()
{
    theView->setTool("pen");
}

void MainWindow::on_paintWidthSpin_valueChanged(int arg1)
{
    ui->paintWidthSlide->setValue(arg1);
}

void MainWindow::on_paintWidthSlide_sliderMoved(int position)
{
    ui->paintWidthSpin->setValue(position);
}

void MainWindow::on_shapeWidthSpin_valueChanged(int arg1)
{
    ui->shapeWidthSlide->setValue(arg1);
}

void MainWindow::on_shapeWidthSlide_sliderMoved(int position)
{
    ui->shapeWidthSpin->setValue(position);
}
