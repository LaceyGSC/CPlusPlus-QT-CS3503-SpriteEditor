#include "previewwindow.h"
#include "ui_previewwindow.h"

previewwindow::previewwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::previewwindow)
{
    ui->setupUi(this);

}

previewwindow::~previewwindow()
{
    delete ui;
}

void previewwindow::previewSlot(int value, std::vector<QImage> _imageList) {
    fps = value;
    int delay = 10 * (100 / fps); // This is the delay in 1/100th of a second. 5 corresponds to 25 frames per second
    imageList = _imageList; // I think this is deepcopy?
    int n = imageList.size();

    theScene = new QGraphicsScene(ui->previewView);

    // Infinite loop
  //  while (true) {
        // wait time
       //workerThread.msleep(delay);

        // Preview
        QImage theImage = imageList.at(n % imageList.size());
        //theImage = imageList.at(0);
        pixImage = QPixmap::fromImage(theImage);

        theScene->addPixmap(pixImage);
        theScene->setSceneRect(pixImage.rect());
        n++;

        ui->previewView->setScene(theScene);
 //   }
}
