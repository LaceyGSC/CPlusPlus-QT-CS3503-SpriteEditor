#include "mainwindow.h"
#include "ui_mainwindow.h"

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

    canvas = new QGraphicsScene(this);
    canvas ->addPixmap(image);
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
