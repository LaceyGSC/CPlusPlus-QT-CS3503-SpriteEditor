#ifndef PREVIEWWINDOW_H
#define PREVIEWWINDOW_H

#include <QDialog>
#include <QPixmap>
#include <QGraphicsScene>
#include <QThread>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>

namespace Ui {
class previewwindow;
}

class previewwindow : public QDialog
{
    Q_OBJECT

public:
    explicit previewwindow(QWidget *parent = 0);
    ~previewwindow();

private:
    Ui::previewwindow *ui;
    int fps;
    std::vector<QImage> imageList;
    QPixmap pixImage;
    QGraphicsPixmapItem pixMap;
    QThread workerThread;
    QGraphicsView theView;
    QGraphicsScene *theScene;

public slots:
    void previewSlot(int value, std::vector<QImage> _imageList);
};

#endif // PREVIEWWINDOW_H
