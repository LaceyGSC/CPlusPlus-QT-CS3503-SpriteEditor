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
#include <string>

class SlideView : public QGraphicsView
{
    Q_OBJECT
public:
    explicit SlideView(QGraphicsView *parent = 0);
    QImage getImage();
    void setTool(std::string tool);

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
    double scaledPixelWidth;
    //the types of tool we use to edit pixels
    enum tools {test, pen, paintBrush, erase, shapeLine, shapeCircle, shapeSquare};
    tools theTool;

    const int IMAGE_SIZE = 32; // an matrix of pixels should be a square matrix.

    //Undo-redo features
    std::stack<QImage> undoStack;
    std::stack<QImage> redoStack;
    void updateScene();

    void drawLine(int x1, int y1, int x2, int y2);
    void drawCirle(int x1, int y1, int w, int h);
    void drawSquare(int x1, int y1, int w, int h);

    QPointF origPoint;
    QGraphicsLineItem* itemToDraw;
    QGraphicsEllipseItem* circleToDraw;
    QGraphicsRectItem* SquareToDraw;





    const int IMAGE_SIZE = 32; // an matrix of pixels should be a square matrix.

    //Undo-redo features
    std::stack<QImage> undoStack;
    std::stack<QImage> redoStack;
    void updateScene();



protected:
    virtual void mouseMoveEvent( QMouseEvent* event);
    virtual void mousePressEvent( QMouseEvent* event);
    virtual void mouseReleaseEvent( QMouseEvent* event);

    //virtual void mouseDoubleClickEvent(QMouseEvent *event);

signals:

public slots:
    void undoSlot();
    void redoSlot();
    void rotateLeftSlot();
    void rotateRightSlot();
    void flipHorizontalSlot();
    void flipVerticalSlot();
};

#endif // SLIDEVIEW_H
