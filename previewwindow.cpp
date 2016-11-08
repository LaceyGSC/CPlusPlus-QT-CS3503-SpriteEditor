#include "previewwindow.h"
#include "ui_previewwindow.h"

PreviewWindow::PreviewWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PreviewWindow)
{
    ui->setupUi(this);
    connect(&timer, &QTimer::timeout, this, &PreviewWindow::timerSlot);

}

PreviewWindow::~PreviewWindow()
{
    delete ui;
}

void PreviewWindow::previewSlot(int value, std::vector<QImage> _imageList) {

    fps = value;
    int delay =  (1000 / fps); // This is the delay in 1/100th of a second. 5 corresponds to 25 frames per second
    imageList = _imageList; // I think this is deepcopy?
    counter = imageList.size();

    timer.start(delay);
}

void PreviewWindow::timerSlot() {
    // Preview
    theScene = new QGraphicsScene(ui->previewView);
    QImage theImage = imageList.at(counter % imageList.size());
    //theImage = imageList.at(0);
    pixImage = QPixmap::fromImage(theImage);

    theScene->addPixmap(pixImage);
    theScene->setSceneRect(pixImage.rect());
    counter++;
    ui->previewView->setScene(theScene);
}
