#include "slideview.h"


SlideView::SlideView(QGraphicsView *parent ) : QGraphicsView(parent)
{
    //Creates and initializes the global variables for the QImage, the QGraphicsScene, and the pixMap.
    //Failure to create new here causes fatal crash in mouse events
    //theImage = new QImage(10,10,QImage::Format_ARGB32);
    theScene  =  new QGraphicsScene(this);
   // pixMap = new QGraphicsPixmapItem();

    //Creates the default opacity value and background color for the QGraphicScene
    //opacity: Set this between 0-255, 0 is transparent
    int opacity = 255;//
    QBrush brush(QColor(0, 0, 0, 200));
    QPainter painty(&theImage);
    //QRectF pix(w, h, 1/(theScene->height()/pixelHeight), 1/(theScene->width()/pixelWidth));
    painty.fillRect(0,0, pixelWidth, pixelHeight, QBrush(QColor(0, 0, 255, 0)));
    pixelHeight = theImage.height();
    pixelWidth = theImage.width();


    //Sets the value of global pixImage to the default image created above
    //Fills with solid red for testing
    pixImage = QPixmap::fromImage(theImage);

    //pixImage.fill(QColor(255,0,0,opacity));

    //Scales image
    //CURRENT BUG: incorrect vaules coming from parent geometry
    //              Hardcoded size values for testing, change at later date
    pixImageZoomed = pixImage.scaled(275, 275,
                                       Qt::IgnoreAspectRatio, Qt::FastTransformation);


    //Adds zoomed pixel map of image to the QGraphicsScene
    pixMap = theScene->addPixmap(pixImageZoomed);

    //Sets the view size and background color for QGraphicScene
    theScene->setSceneRect(pixImageZoomed.rect());
    theScene->setBackgroundBrush(brush);

    //Sets values for the QGraphicsView class
    //CURRENT BUG: Scaling not needed for hard coded size values, replace when sizing supported.
    this->setScene(theScene);
    //this->scale(.823, .823);
    this->setMouseTracking(true);


}

/*
 * getImage method:
 * ----------------
 * Parameters:
 *      -None
 * Return Value:
 *      -QImage
 * ----------------
 * Returns the default QImage created within the constructor
 *
 * */
QImage SlideView::getImage()
{
    return theImage;
}

/*
 * mouseMoveEvent method:
 * ----------------
 * Parameters:
 *      -QMouseEvent*
 * Return Value:
 *      -void
 * ----------------
 * Overrides parent class method
 * Listens for mouseMoveEvent events
 * Creates the painter, should add changes to image
 *      CURRENT BUG: Does not add line to the image
 * QPoint of the event pos() written to debugger for testing
 *
 * */
void SlideView::mouseMoveEvent( QMouseEvent* event)
{
   /*This is probably where a lot of the drawing methods could go
    * Tried to add, but my understading of the Q Graphics interactions isn't great
    * So will let someone else add
    * */
    //QRectF rect(pos().x(), )
    /*if(MousPessed){
        QPainter paint(theImage);
        paint.drawLine(startPos, event->pos());

        pixImage = QPixmap::fromImage(*theImage);
        pixImageZoomed = pixImage.scaled(275, 275,
                                               Qt::IgnoreAspectRatio, Qt::FastTransformation);
        pixMap->setPixmap(pixImageZoomed);
    }*/


    qDebug() << event->pos();
}


/*
 * mousePressEvent method:
 * ----------------
 * Parameters:
 *      -QMouseEvent*
 * Return Value:
 *      -void
 * ----------------
 * Overrides parent class method
 * Listens for mousePressEvent events
 * Sets starting position to the QPoint of the events pos() method
 * */
void SlideView::mousePressEvent( QMouseEvent* event)
{
    QPainter painty(&theImage);
    //QRgb value = qRgba(0, 0, 255, 255);
    int w = event->pos().x()/(theScene->width()/pixelWidth);
    int h = event->pos().y()/(theScene->height()/pixelHeight);
    std::cout<<w<<" "<< h<<std::endl;
    QRectF pix(w, h, 1/(theScene->height()/pixelHeight), 1/(theScene->width()/pixelWidth));
    painty.setPen(Qt::blue);
    painty.drawRect(pix);
    pixImage = QPixmap::fromImage(theImage);
    pixImageZoomed = pixImage.scaled(275, 275,
                                           Qt::IgnoreAspectRatio, Qt::FastTransformation);

    pixMap = theScene->addPixmap(pixImageZoomed);

    //Sets the view size and background color for QGraphicScene
    theScene->setSceneRect(pixImageZoomed.rect());
    //theScene->setBackgroundBrush(brush);

    //Sets values for the QGraphicsView class
    //CURRENT BUG: Scaling not needed for hard coded size values, replace when sizing supported.
    this->setScene(theScene);

    pixMap->setPixmap(pixImageZoomed);
    this->update();
}

/*
 * mousePressEvent method:
 * ----------------
 * Parameters:
 *      -QMouseEvent*
 * Return Value:
 *      -void
 * ----------------
 * Overrides parent class method
 * Listens for mousePressEvent events
 * QPoint of the events pos() method is written to debug console for testing
 * */
void SlideView::mouseReleaseEvent( QMouseEvent* event)
{
    qDebug() << event->pos();
}
