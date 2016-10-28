#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QImage>
#include <QPixmap>
#include <project.h>
#include <QGraphicsPixmapItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_LineButton_clicked();


protected:

private:
    Ui::MainWindow *ui;
    Project project;
    Frame firstFrame;
    QGraphicsView* view;
    QGraphicsPixmapItem *pixMap;

};

#endif // MAINWINDOW_H
