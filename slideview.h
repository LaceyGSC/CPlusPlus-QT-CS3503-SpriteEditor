#ifndef SLIDEVIEW_H
#define SLIDEVIEW_H

#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QMouseEvent>
#include <QPoint>
#include <QDebug>
#include <QPixmap>
#include <iostream>
#include <stack>

class SlideView : public QGraphicsView
{
    Q_OBJECT
public:
    explicit SlideView(QGraphicsView *parent = 0);
    QImage getImage();

private:
    QImage theImage = QImage(32,32,QImage::Format_ARGB32);
    QPoint startPos;
    QGraphicsScene *theScene;
    QGraphicsPixmapItem *pixMap;
    QPixmap pixImage;
    QPixmap pixImageZoomed;
    int pixelHeight;
    int pixelWidth;
    bool drawing;
    QPoint lastPoint;
    QRgb color;
    int drawingY;
    int drawingX;
    //the types of tool we use to edit pixels
    enum tool {pen, paintBrush, erase, shapeLine, shapeCircle, shapeSquare};

    //Undo-redo features
    std::stack<QImage> undoStack;
    std::stack<QImage> redoStack;
    void updateScene();



protected:
    virtual void mouseMoveEvent( QMouseEvent* event);
    virtual void mousePressEvent( QMouseEvent* event);
    virtual void mouseReleaseEvent( QMouseEvent* event);

signals:

public slots:
    void undoSlot();
    void redoSlot();
};

#endif // SLIDEVIEW_H
