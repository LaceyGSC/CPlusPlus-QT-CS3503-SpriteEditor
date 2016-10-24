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
    canvas = new QGraphicsScene(this);
    canvas ->addPixmap(image);
    canvas->setSceneRect(image.rect());
    view = new QGraphicsView(canvas);
    setCentralWidget(view);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LineButton_clicked()
{

}
