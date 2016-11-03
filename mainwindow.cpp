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

    size = 32;


    //Creates and empty graphicsview to act as the parent for the SlideView
    view = new QGraphicsView();

    //Creates a slide view: extended qGraphicsView with view as its parent
    QImage theImage = QImage(size, size, QImage::Format_ARGB32);

    // If we don't fill theImage before applying it. We get artifacts.
    // I suggest the default background as white.
    QColor defaultColor = qRgba(255, 255, 255, 0);
    //theImage.fill(defaultColor);
    theView = new SlideView(view, theImage);

    theProject = new Project("", theView, this);

    theView = theProject->getSlide(0);

    theView->setFill(false);

    //set spinboxes range
    ui->shapeWidthSlide->setRange(1, theView->getImage().width()/2);
    ui->paintWidthSlide->setRange(1, theView->getImage().width()/2);
    ui->paintWidthSpin->setRange(1, theView->getImage().width()/2);
    ui->shapeWidthSpin->setRange(1, theView->getImage().width()/2);

    //Adds a the extended slideview to the layout for frame_2
    ui->drawingGridLayout->addWidget(theView);

    QPushButton* preButton = new QPushButton();
    preButton->setObjectName(QString::number(currentIndex));
    connect(preButton,SIGNAL(clicked()),this,SLOT(changeFrame()));

    QSize buttonSize((ui->scrollArea->height())-40,(ui->scrollArea->height())-40);
    QPixmap testMap = QPixmap::fromImage(theProject->getSlide(currentIndex)->getImage().copy());
    testMap = testMap.scaled(buttonSize,Qt::IgnoreAspectRatio, Qt::FastTransformation);

    QIcon buttonIcon(testMap);

    preButton->setFixedSize(buttonSize);
    preButton->setIconSize(buttonSize);
    preButton->setIcon(buttonIcon);
    preButton->setFlat(false);


    testLayout = new QHBoxLayout(ui->scrollAreaWidgetContents);
    testLayout->setContentsMargins(10,0,10,0);
    ui->scrollAreaWidgetContents->setLayout(testLayout);

     ui->scrollAreaWidgetContents->layout()->addWidget(preButton);

    connect(this, &MainWindow::undoSignal, theView, &SlideView::undoSlot);
    connect(this, &MainWindow::redoSignal, theView, &SlideView::redoSlot);
    connect(this, &MainWindow::rotateLeftSignal, theView, &SlideView::rotateLeftSlot);
    connect(this, &MainWindow::rotateRightSignal, theView, &SlideView::rotateRightSlot);
    connect(this, &MainWindow::flipHorizontalSignal, theView, &SlideView::flipHorizontalSlot);
    connect(this, &MainWindow::flipVerticalSignal, theView, &SlideView::flipVerticalSlot);
    connect(this, &MainWindow::addFrameSignal,theProject, &Project::addFrameSlot);

    connect(theView, &SlideView::updatePalettePreviewSignal, this, &MainWindow::colorPaletteChangedSlot);
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

void MainWindow::changeFrame()
{
    QObject *senderObj = sender();
    QString senderObjName = senderObj->objectName();

    int index = senderObjName.toInt();

    ui->drawingGridLayout->removeWidget(theView);

    theView = theProject->getSlide(index);

    ui->drawingGridLayout->addWidget(theView);

    theView->updateScene();

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
    theView->setPaintWidth(arg1);
}

void MainWindow::on_paintWidthSlide_sliderMoved(int position)
{
    ui->paintWidthSpin->setValue(position);
    theView->setPaintWidth(position);
}

void MainWindow::on_shapeWidthSpin_valueChanged(int arg1)
{
    ui->shapeWidthSlide->setValue(arg1);
    theView->setShapeWidth(arg1);
}

void MainWindow::on_shapeWidthSlide_sliderMoved(int position)
{
    ui->shapeWidthSpin->setValue(position);
    theView->setShapeWidth(position);
}

void MainWindow::on_PaintBrushButton_clicked()
{
    theView->setTool("paintBrush");
}

void MainWindow::updateSlide(int i)
{
    delete theView;
    theView = theProject->getSlide(i);
    ui->drawingGridLayout->addWidget(theView);
}

void MainWindow::updatePreview()
{
    for(int j = 0; theProject->getSizeList(); j++)
    {

    }
}

void MainWindow::on_AddFrameButton_clicked()
{
    ui->shapeWidthSlide->setValue(1);
    ui->shapeWidthSpin->setValue(1);
    ui->paintWidthSlide->setValue(1);
    ui->paintWidthSpin->setValue(1);
    currentIndex = theProject->getSizeList();

    QPushButton* preButton = new QPushButton();
    preButton->setObjectName(QString::number(currentIndex));
    connect(preButton,SIGNAL(clicked()),this,SLOT(changeFrame()));

    emit addFrameSignal(new SlideView(view, QImage(size, size, QImage::Format_ARGB32)));


    QSize buttonSize((ui->scrollArea->height())-40,(ui->scrollArea->height())-40);
    QPixmap testMap = QPixmap::fromImage(theProject->getSlide(currentIndex)->getImage());
    testMap = testMap.scaled(buttonSize,Qt::IgnoreAspectRatio, Qt::FastTransformation);

    QIcon buttonIcon(testMap);

    preButton->setFixedSize(buttonSize);
    preButton->setIconSize(buttonSize);
    preButton->setIcon(buttonIcon);
    preButton->setFlat(false);

    ui->scrollAreaWidgetContents->layout()->addWidget(preButton);

    ui->drawingGridLayout->removeWidget(theView);

    theView = theProject->getSlide(currentIndex);

    ui->drawingGridLayout->addWidget(theView);
}

void MainWindow::on_EyeDropperButton_clicked()
{
    theView->setTool("eyedropper");
}

void MainWindow::colorPaletteChangedSlot(QColor previewColor){
    QPalette palette = ui->colorPaletteWidget->palette();
    palette.setColor(QPalette::Window, previewColor);
    ui->colorPaletteWidget->setPalette(palette);
}

void MainWindow::on_EraseButton_clicked()
{
    theView->setTool("erase");
}
