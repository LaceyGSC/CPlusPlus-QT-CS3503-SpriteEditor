#include "slideview.h"
#include <math.h>

SlideView::SlideView(QGraphicsView *parent ) : QGraphicsView(parent)
{
    //Creates and initializes the global variables for the QImage, the QGraphicsScene, and the pixMap.
    //Failure to create new here causes fatal crash in mouse events
    theScene  =  new QGraphicsScene(this);
    drawing = false;

    //Creates the default opacity value and background color for the QGraphicScene
    //opacity: Set this between 0-255, 0 is transparent
    //int opacity = 255;//
    QBrush brush(QColor(0, 0, 0, 200));
    QPainter painty(&theImage);
    //Make alpha channel
    QRgb value = qRgba(0, 0, 0, 0);
    painty.fillRect(0,0, pixelWidth, pixelHeight, value);

    //get height and width of Qimage
    pixelHeight = theImage.height();
    pixelWidth = theImage.width();
    //color for testing

    color = qRgba(0, 255, 0, 0);


    //Sets the value of global pixImage to the default image created above
    //Fills with solid red for testing
    pixImage = QPixmap::fromImage(theImage);


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



    if(drawing)
    {
        // before drawing, save the current image for undo
        undoStack.push(theImage.copy());

        drawingX = event->pos().x()/(theScene->width()/pixelWidth);
        drawingY = event->pos().y()/(theScene->height()/pixelHeight);

        QPainter paint(&theImage);
        QRectF pix(drawingX, drawingY, 1/(theScene->height()/pixelHeight), 1/(theScene->width()/pixelWidth));
        paint.setPen(color);
        paint.drawRect(pix);
        //add Qimage to pix map
        pixImage = QPixmap::fromImage(theImage);
        //scale image
        pixImageZoomed = pixImage.scaled(275, 275,
                                               Qt::IgnoreAspectRatio, Qt::FastTransformation);
        //add pixmap to scene

        pixMap->setPixmap(pixImageZoomed);
        this->update();


    }


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
 *
 * FOR TESTING: can change individual pixel with mous click
 * */
void SlideView::mousePressEvent( QMouseEvent* event)
{
    /*
    //make a painter
    QPainter painty(&theImage);
    //get pixel Position with mouse click
    int w = event->pos().x()/(theScene->width()/pixelWidth);
    int h = event->pos().y()/(theScene->height()/pixelHeight);
    //for testing
    std::cout<<w<<" "<< h<<std::endl;
    //set up the pixel w and h are the pixel positions the next two values are how big the the pixels need to be
    QRectF pix(w, h, 1/(theScene->height()/pixelHeight), 1/(theScene->width()/pixelWidth));
    //set color for testing
    painty.setPen(Qt::blue);
    //draw the pixel
    painty.drawRect(pix);
    //add Qimage to pix map
    pixImage = QPixmap::fromImage(theImage);
    //scale image
    pixImageZoomed = pixImage.scaled(275, 275,
                                           Qt::IgnoreAspectRatio, Qt::FastTransformation);
    //add pixmap to scene

    pixMap->setPixmap(pixImageZoomed);
    //this->update();
    */
    if (event->button() == Qt::LeftButton)
    {
        // before drawing, save the current image for undo
        undoStack.push(theImage.copy());

        drawing = true;
        //get the x and y coordinates of the pixel
        drawingX = event->pos().x()/(theScene->width()/pixelWidth);
        drawingY = event->pos().y()/(theScene->height()/pixelHeight);
        //std::cout<<drawingX<<" "<<drawingY<<std::endl;
        QPainter paint(&theImage);
        QRectF pix(drawingX, drawingY, 1/(theScene->height()/pixelHeight), 1/(theScene->width()/pixelWidth));
        paint.setPen(color);
        paint.drawRect(pix);
        //add Qimage to pix map
        pixImage = QPixmap::fromImage(theImage);
        //scale image
        pixImageZoomed = pixImage.scaled(275, 275,
                                               Qt::IgnoreAspectRatio, Qt::FastTransformation);
        //add pixmap to scene

        pixMap->setPixmap(pixImageZoomed);

        this->update();
    }
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
    if(event->button() == Qt::LeftButton)
    {
        drawing = false;

    }


   // qDebug() << event->pos();
}

/**
 * Sets the scene back to the last time before any image modifying event took place: drawing, rotating, flipping, etc.
 */
void SlideView::undoSlot()
{
    if (undoStack.empty())
    {
        return;
    }

   redoStack.push(theImage);
   theImage = undoStack.top();
   undoStack.pop();

    updateScene();

}

/**
 * Sets the image back to the last time the user selected undo
 */
void SlideView::redoSlot()
{
    if (redoStack.empty())
    {
        return;
    }

    undoStack.push(theImage);
    theImage = redoStack.top();
    redoStack.pop();

    updateScene();
}


void SlideView::updateScene()
{
    // draw
    pixImage = QPixmap::fromImage(theImage);
    //scale image
    pixImageZoomed = pixImage.scaled(275, 275,
                                           Qt::IgnoreAspectRatio, Qt::FastTransformation);

    //add pixmap to scene
    //Adds zoomed pixel map of image to the QGraphicsScene
    pixMap = theScene->addPixmap(pixImageZoomed);
    this->update();
}


/**
 * Rotates the image to the left 90 degrees
 */
void SlideView::rotateLeftSlot()
{
    undoStack.push(theImage);
    QImage flippedImage = QImage(IMAGE_SIZE,IMAGE_SIZE,QImage::Format_ARGB32);

    // this is the algorithm was a trial and error for rotating left.  Somehow the rotating left algorithm doesn't work
    for (int row = 0; row < IMAGE_SIZE; row++)
    {
        for (int col = IMAGE_SIZE-1, flipCol = 0; col >= 0; col--, flipCol++)
        {
            //QRgb pix = theImage.pixel(row, col);
            //flippedImage.setPixel(row, flipCol, pix);
            QRgb pix = theImage.pixel(col, row);
            flippedImage.setPixel(row, flipCol, pix);
        }
    }

    theImage = flippedImage;
    updateScene();
}


/**
 * Rotates the image to the right 90 degrees
 */
void SlideView::rotateRightSlot()
{
    undoStack.push(theImage);

    QImage rotatedImage = QImage(IMAGE_SIZE,IMAGE_SIZE,QImage::Format_ARGB32);

    // this is the algorithm for rotating left, but somehow our picture comes out rotated right.

    for (int row = 0; row < IMAGE_SIZE; row++)
    {
        for (int col = IMAGE_SIZE-1, leftRow = 0; col >= 0; col--, leftRow++)
        {
            QRgb pix = theImage.pixel(row,col);
            rotatedImage.setPixel(leftRow, row, pix);
            qDebug() << "rotatedLeftImg: " << leftRow << " " << row;
            qDebug() << "image: " << row << " " << col;
        }
    }

    theImage = rotatedImage;

    updateScene();
}


/**
 * Flips the image horizontally
 */
void SlideView::flipHorizontalSlot()
{
    undoStack.push(theImage);
    QImage rotatedImage = QImage(IMAGE_SIZE,IMAGE_SIZE,QImage::Format_ARGB32);

    // this algorithm is to rotate the image 90 degrees right, but somehow the image comes out flipped horizontal

    for (int row = 0, rotateCol = IMAGE_SIZE-1; row < IMAGE_SIZE; row++, rotateCol--)
    {
        for (int col = 0; col < IMAGE_SIZE; col++)
        {
            QRgb pix = theImage.pixel(row, col);
            rotatedImage.setPixel(rotateCol, col, pix);
        }
    }

    theImage = rotatedImage;

    updateScene();
}


/**
 * Flips the image vertically
 */
void SlideView::flipVerticalSlot()
{
    undoStack.push(theImage);
    QImage flippedImage = QImage(IMAGE_SIZE,IMAGE_SIZE,QImage::Format_ARGB32);

    // this is the algorithm was for flipping horizontally, but somehow the image came out flipped vertically.
    for (int row = 0; row < IMAGE_SIZE; row++)
    {
        for (int col = IMAGE_SIZE-1, flipCol = 0; col >= 0; col--, flipCol++)
        {
            QRgb pix = theImage.pixel(row, col);
            flippedImage.setPixel(row, flipCol, pix);
        }
    }

    theImage = flippedImage;
    updateScene();
}

