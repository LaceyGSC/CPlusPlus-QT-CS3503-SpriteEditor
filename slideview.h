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
    Q_PROPERTY (QColor previewColor READ previewColor NOTIFY updatePalettePreviewSignal)
public:
    explicit SlideView(QGraphicsView *parent, QImage image);
    QImage getImage();
    void setTool(std::string tool);
    void setFill(bool fill);
    void setShapeWidth(int w);
    void setPaintWidth(int w);
    void updateScene();
    void updatePalettePreview(QColor previewColor);

    QColor previewColor() const
    {
        return m_previewColor;
    }

private:
    QImage theImage;
    QPoint startPos;
    QGraphicsScene *theScene;
    QGraphicsPixmapItem *pixMap;
    QPixmap pixImage;
    QPixmap pixImageZoomed;
    QPointF origPoint;
    QGraphicsLineItem* itemToDraw;
    QGraphicsEllipseItem* circleToDraw;
    QGraphicsRectItem* SquareToDraw;
    int pixelHeight;
    int pixelWidth;
    bool drawing;
    QPoint lastPoint;
    QRgb color;
    int drawingY;
    int drawingX;
    double scaledPixelWidth;
    //the types of tool we use to edit pixels
    enum tools {test, pen, paintBrush, erase, eyedropper, shapeLine, shapeCircle, shapeSquare};
    tools theTool;
    bool fillShape;
    int shapeWidth;
    int paintWidth;

    bool drawingLine = false;
    bool drawingCircle = false;
    bool drawingRect = false;

    //Undo-redo fields
    std::stack<QImage> undoStack;
    std::stack<QImage> redoStack;


    //Paint bucket fields
    bool hasPaintBucket = false;
    void fillInArea(int x, int y);
    bool isValidPoint(int x, int y);
    bool hasAreaColor(QColor areaColor, QColor neighborColor);
    bool isFillableNeighbor(int x, int y, QColor areaColor);


    const int NUMBER_OF_PIXEL = 32; // an matrix of pixels should be a square matrix.

    void drawLine(int x1, int y1, int x2, int y2);
    void drawCirle(int x1, int y1, int w, int h);
    void drawSquare(int x1, int y1, int w, int h);
    void brush(int x, int y);

    QColor m_previewColor;

protected:
    virtual void mouseMoveEvent( QMouseEvent* event);
    virtual void mousePressEvent( QMouseEvent* event);
    virtual void mouseReleaseEvent( QMouseEvent* event);

    //virtual void mouseDoubleClickEvent(QMouseEvent *event);

signals:
    void updatePalettePreviewSignal(QColor previewColor);

public slots:
    void undoSlot();
    void redoSlot();
    void rotateLeftSlot();
    void rotateRightSlot();
    void flipHorizontalSlot();
    void flipVerticalSlot();
    void paintBucketSlot();
};

#endif // SLIDEVIEW_H
