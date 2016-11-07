#ifndef PREVIEWDIALOG_H
#define PREVIEWDIALOG_H

#include <QDialog>
#include <QPixmap>
#include <QGraphicsScene>
#include <QThread>

namespace Ui {
class PreviewDialog;
}

class PreviewDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PreviewDialog(QWidget *parent = 0);
    ~PreviewDialog();

private:
    Ui::PreviewDialog *ui;
    int fps;
    std::vector<QImage> imageList;
    QPixmap pixImage;
    QThread workerThread;

public slots:
    void previewSlot(int value, const std::vector<QImage>& _imageList);
};

#endif // PREVIEWDIALOG_H
