#include "slideview.h"
#include <math.h>


SlideView::SlideView(QGraphicsView *parent ) : QGraphicsView(parent)
{
    //Creates and initializes the global variables for the QImage, the QGraphicsScene, and the pixMap.
    //Failure to create new here causes fatal crash in mouse events
    theTool = test;
    theScene  =  new QGraphicsScene(this);
    drawing = false;


    //Creates the default opacity value and background color for the QGraphicScene
    //opacity: Set this between 0-255, 0 is transparent
    //int opacity = 255;//
    QBrush brush(QColor(128, 128, 128, 255));
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

    //scaled the width for drawing
    scaledPixelWidth = 1/(theScene->height()/pixelHeight);

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

    if(drawing)
    {
        if(theTool == test){
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
        if(theTool == shapeLine){
            std::cout<<"reached move"<<std::endl;

            //this->update();
            if(!itemToDraw){
                itemToDraw = new QGraphicsLineItem;
                theScene->addItem(itemToDraw);
                QPen pen(Qt::black);
                pen.setWidth(4);
                //pen.setWidth(10);
                itemToDraw->setPen(pen);
                //itemToDraw->setPos(origPoint);
            }
            itemToDraw->setLine(event->pos().x(), event->pos().y(), origPoint.x(), origPoint.y());


        }

        if(theTool == shapeCircle){
            std::cout<<"reached move"<<std::endl;

            //this->update();
            if(!circleToDraw){
                circleToDraw = new QGraphicsEllipseItem;
                theScene->addItem(circleToDraw);
                QPen pen(Qt::black);
                pen.setWidth(4);
                //pen.setWidth(10);
                circleToDraw->setPen(pen);
                //itemToDraw->setPos(origPoint);
            }
            circleToDraw->
                    setRect(origPoint.x(), origPoint.y(), event->pos().x() - origPoint.x(),
                            event->pos().y() - origPoint.y());


        }


    }


    //qDebug() << event->pos();
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

    if (event->button() == Qt::LeftButton)
    {
        drawing = true;
        if(theTool == test){
            // before drawing, save the current image for undo
            undoStack.push(theImage.copy());


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

        std::cout<<"reached clicked"<<std::endl;
        drawingX = event->pos().x()/(theScene->width()/pixelWidth);
        drawingY = event->pos().y()/(theScene->height()/pixelHeight);
        origPoint = event->pos();

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

        if(theTool == shapeLine){
            int x2 = event->pos().x()/(theScene->width()/pixelWidth);
            int y2 = event->pos().y()/(theScene->height()/pixelHeight);

            drawLine(drawingX, drawingY, x2, y2);

            updateScene();

            //theScene->setBackgroundBrush(QColor(128, 128, 128, 255));
            //theScene->setForegroundBrush(QColor(128, 128, 128, 255));
            //theScene->removeItem(itemToDraw);
            //delete itemToDraw;
        }

        if(theTool == shapeCircle){
            int x2 = event->pos().x()/(theScene->width()/pixelWidth);
            int y2 = event->pos().y()/(theScene->height()/pixelHeight);

            drawCirle(drawingX, drawingY, x2, y2);

            updateScene();

            //theScene->setBackgroundBrush(QColor(128, 128, 128, 255));
            //theScene->setForegroundBrush(QColor(128, 128, 128, 255));
            //theScene->removeItem(itemToDraw);
            //delete itemToDraw;
        }




        // save the current image for undo
        //undoStack.push(theImage.copy());

    }



   // qDebug() << event->pos();
}

/*
 * Set what tool will be used in Qt
 */
void SlideView::setTool(std::string tool) {
    if(tool == "line"){
        theTool = shapeLine;
        //std::cout<<"reached setTool"<<std::endl;
    }
    if(tool == "circle"){
        theTool = shapeCircle;
        //std::cout<<"reached setTool"<<std::endl;
    }
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


/**
 * Updates the pixel art canvas
 */
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

/*
 *draws a line to Qimage
*/
void SlideView::drawLine(int x1, int y1, int x2, int y2){
    QPainter line(&theImage);
    QPen pen(color);
    pen.setWidthF(scaledPixelWidth);
    line.setPen(color);
    QLineF drawLine(x1, y1, x2, y2);
    line.drawLine(drawLine);
}

void SlideView::drawCirle(int x1, int y1, int w, int h){
    QPainter paint(&theImage);
    QPen pen(color);
    pen.setWidthF(scaledPixelWidth);
    paint.setPen(color);
    //QRect circle(x1, y1, w, h);
    paint.drawEllipse(x1, y1, w - x1, h - y1);
}

void SlideView::drawSquare(int x1, int y1, int w, int h){
    QPainter paint(&theImage);
    QPen pen(color);
    pen.setWidthF(scaledPixelWidth);
    paint.setPen(color);
    //QRect circle(x1, y1, w, h);
    paint.drawRect(x1, y1, w - x1, h - y1);
}

