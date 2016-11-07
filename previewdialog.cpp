#include "previewdialog.h"
#include "ui_previewdialog.h"
#include <QThread>

PreviewDialog::PreviewDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PreviewDialog)
{
    ui->setupUi(this);

}

PreviewDialog::~PreviewDialog()
{
    delete ui;
}

void PreviewDialog::previewSlot(int value, const std::vector<QImage>& _imageList) {
    fps = value;
    int delay = 10 * (100 / fps); // This is the delay in 1/100th of a second. 5 corresponds to 25 frames per second
    imageList = _imageList; // I think this is deepcopy?
    int n = imageList.size();
    QGraphicsScene *theScene = new QGraphicsScene();

    while (true) {
        // wait time
        workerThread.msleep(delay);

        // Preview
        QImage theImage = imageList[n % imageList.size()];
        pixImage = QPixmap::fromImage(theImage);

        theScene->addPixmap(pixImage);
        theScene->setSceneRect(pixImage.rect());
        theScene->setBackgroundBrush(Qt::white);
    }
}


