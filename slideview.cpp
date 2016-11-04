/**
    Programmer:     Thuy Nguyen, Steven Reese, Lacey <last name> , Tambra Smith, Andrew Tsai
    Last updated:   November 1, 2016
    Description:    Slide view provides the algorithm to modify the sprite editor canvas, enabling user to create pixel art.

*/

#include "slideview.h"
#include <math.h>
#include <queue>
#include <iostream>
using namespace std;


SlideView::SlideView(QGraphicsView *parent, QImage image) : QGraphicsView(parent)
{
    //Creates and initializes the global variables for the QImage, the QGraphicsScene, and the pixMap.
    //Failure to create new here causes fatal crash in mouse events
    theImage = image.copy();
    theTool = pen;
    theScene  =  new QGraphicsScene(this);
    drawing = false;
    shapeWidth = 1;
    paintWidth = 1;


    //Creates the default opacity value and background color for the QGraphicScene
    //opacity: Set this between 0-255, 0 is transparent
    //int opacity = 255;//
    QBrush brush2(QColor(128, 128, 128, 255));
    QBrush brush(QColor(0, 0, 0, 0));
    QPainter painty(&theImage);
    //Make alpha channel
    //QRgb value = qRgba(0, 0, 0, 0);
    painty.fillRect(0,0, pixelWidth, pixelHeight, brush);

    //get height and width of Qimage
    pixelHeight = theImage.height();
    pixelWidth = theImage.width();

    //color for testing

    color = qRgba(0, 255, 0, 255);


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
    theScene->setBackgroundBrush(brush2);


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
    return theImage.copy();
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

        if(theTool == pen){
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
            if(!drawingLine){
                drawingLine = true;
                itemToDraw = new QGraphicsLineItem;
                theScene->addItem(itemToDraw);
                QPen pen(color);
                pen.setWidth(8 * shapeWidth);
                //pen.setWidth(10);
                itemToDraw->setPen(pen);
                //itemToDraw->setPos(origPoint);
            }
            itemToDraw->setLine(event->pos().x(), event->pos().y(), origPoint.x(), origPoint.y());


        }

        if(theTool == shapeCircle){
            std::cout<<"reached move"<<std::endl;

            //this->update();
            if(!drawingCircle){
                drawingCircle = true;
                circleToDraw = new QGraphicsEllipseItem;
                theScene->addItem(circleToDraw);
                QPen pen(color);
                pen.setWidth(4 * shapeWidth);
                //pen.setWidth(10);
                circleToDraw->setPen(pen);
                //itemToDraw->setPos(origPoint);
            }
            circleToDraw->
                    setRect(origPoint.x(), origPoint.y(), event->pos().x() - origPoint.x(),
                            event->pos().y() - origPoint.y());


        }

        if(theTool == shapeSquare){
            std::cout<<"reached move"<<std::endl;

            //this->update();
            if(!drawingRect){
                drawingRect = true;
                SquareToDraw = new QGraphicsRectItem;
                theScene->addItem(SquareToDraw);
                QPen pen(color);
                pen.setWidth(4 * shapeWidth);
                //pen.setWidth(10);
                SquareToDraw->setPen(pen);
                //itemToDraw->setPos(origPoint);
            }
            SquareToDraw->
                    setRect(origPoint.x(), origPoint.y(), event->pos().x() - origPoint.x(),
                            event->pos().y() - origPoint.y());


        }

        if(theTool == paintBrush){
            drawingX = event->pos().x()/(theScene->width()/pixelWidth);
            drawingY = event->pos().y()/(theScene->height()/pixelHeight);
            brush(drawingX, drawingY);

            updateScene();

        }

        if(theTool == erase) {
            // Get coordinates
            drawingX = event->pos().x()/(theScene->width()/pixelWidth);
            drawingY = event->pos().y()/(theScene->height()/pixelHeight);
            // Erase the theImage
            QPainter paint(&theImage);
            //QRectF pix(drawingX, drawingY, 1/(theScene->height()/pixelHeight), 1/(theScene->width()/pixelWidth));
            paint.eraseRect(drawingX, drawingY, paintWidth, paintWidth);
            // Update what we see
            pixImage = QPixmap::fromImage(theImage);
            pixImageZoomed = pixImage.scaled(275, 275,
                                                   Qt::IgnoreAspectRatio, Qt::FastTransformation);
            pixMap->setPixmap(pixImageZoomed);
            this->update();
        }
        if(theTool == eyedropper) {
            // Get coordinates
            drawingX = event->pos().x()/(theScene->width()/pixelWidth);
            drawingY = event->pos().y()/(theScene->height()/pixelHeight);
            // Retrieve color
            QColor pickedColor;
            pickedColor.setRgba(theImage.pixel(drawingX, drawingY));
            pickedColor.setRed(pickedColor.red());
            pickedColor.setGreen(pickedColor.green());
            pickedColor.setBlue(pickedColor.blue());
            // Update color
            QColor previewColor = qRgba(pickedColor.red(), pickedColor.green(), pickedColor.blue(), 255);
            updatePalettePreview(previewColor);

        }
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
 * Sets starting position to the QPoint of the events pos() method
 *
 * FOR TESTING: can change individual pixel with mous click
 * */
void SlideView::mousePressEvent( QMouseEvent* event)
{

    if (event->button() == Qt::LeftButton)
    {
        // before drawing, save the current image for undo
        undoStack.push(theImage.copy());
        drawing = true;
        drawingX = event->pos().x()/(theScene->width()/pixelWidth);
        drawingY = event->pos().y()/(theScene->height()/pixelHeight);
        origPoint = event->pos();

        if (hasPaintBucket)
             {

                // fillInArea(event->pos().x(), event->pos().y());
                 // hasPaintBucket changes with interaction with gui
                fillInArea(drawingX, drawingY);
             }

        else if(theTool == pen){

            //get the x and y coordinates of the pixel
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
        else if(theTool == paintBrush){
            brush(drawingX, drawingY);

            updateScene();

        }
        else if(theTool == erase) {
            // Erase the theImage
            QPainter paint(&theImage);
            //QRectF pix(drawingX, drawingY, 1/(theScene->height()/pixelHeight), 1/(theScene->width()/pixelWidth));
            paint.eraseRect(drawingX, drawingY, paintWidth, paintWidth);
            // Update what we see
            pixImage = QPixmap::fromImage(theImage);
            pixImageZoomed = pixImage.scaled(275, 275,
                                                   Qt::IgnoreAspectRatio, Qt::FastTransformation);
            pixMap->setPixmap(pixImageZoomed);
            this->update();
        }
        else if(theTool == eyedropper) {
            QColor pickedColor;
            pickedColor.setRgba(theImage.pixel(drawingX, drawingY));
            pickedColor.setRed(pickedColor.red());
            pickedColor.setGreen(pickedColor.green());
            pickedColor.setBlue(pickedColor.blue());

            color = qRgba(pickedColor.red(), pickedColor.green(), pickedColor.blue(), 255);
            updatePalettePreview(color);
        }

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
            itemToDraw->setPen(QColor(128, 128, 128, 0));
            itemToDraw = 0;
            drawingLine = false;


        }

        else if(theTool == shapeCircle){
            int x2 = event->pos().x()/(theScene->width()/pixelWidth);
            int y2 = event->pos().y()/(theScene->height()/pixelHeight);

            drawCirle(drawingX, drawingY, x2, y2);

            updateScene();
            circleToDraw->setPen(QColor(128, 128, 128, 0));
            circleToDraw = 0;
            drawingCircle = false;


        }
        else if(theTool == shapeSquare){
            int x2 = event->pos().x()/(theScene->width()/pixelWidth);
            int y2 = event->pos().y()/(theScene->height()/pixelHeight);

            drawSquare(drawingX, drawingY, x2, y2);

            updateScene();
            SquareToDraw->setPen(QColor(128, 128, 128, 0));
            SquareToDraw = 0;

            //SquareToDraw->setPen(QColor(128, 128, 128, 0));
            drawingRect = false;
            //SquareToDraw->setBrush(QColor(128, 128, 128, 255));

        }

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
    if(tool == "rect"){
        theTool = shapeSquare;
    }
    if(tool == "pen"){
        theTool = pen;
    }
    if(tool == "paintBrush"){
        theTool = paintBrush;
    }
    if(tool == "eyedropper"){
        theTool = eyedropper;
        std::cout<<"reached eyedropper"<<std::endl;
    }
    if(tool == "erase"){
        theTool = erase;
        std::cout<<"reached erase"<<std::endl;
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
    pixImage = QPixmap::fromImage(theImage.copy());
    //scale image
    pixImageZoomed = pixImage.scaled(275, 275,
                                           Qt::IgnoreAspectRatio, Qt::FastTransformation);

    //add pixmap to scene
    //Adds zoomed pixel map of image to the QGraphicsScene
    pixMap->setPixmap(pixImageZoomed);
    //pixMap = theScene->addPixmap(pixImageZoomed);
    this->update();
}


/**
 * Rotates the image to the left 90 degrees
 */
void SlideView::rotateLeftSlot()
{
    undoStack.push(theImage);
    QImage flippedImage = QImage(NUMBER_OF_PIXEL,NUMBER_OF_PIXEL,QImage::Format_ARGB32);

    // this is the algorithm was a trial and error for rotating left.  Somehow the rotating left algorithm doesn't work
    for (int row = 0; row < NUMBER_OF_PIXEL; row++)
    {
        for (int col = NUMBER_OF_PIXEL-1, flipCol = 0; col >= 0; col--, flipCol++)
        {
            //QRgb pix = theImage.pixel(row, col);
            //flippedImage.setPixel(row, flipCol, pix);
            QRgb pix = theImage.pixel(col, row);
            flippedImage.setPixel(row, flipCol, pix);
        }
    }

    theImage = flippedImage.copy();
    updateScene();
}


/**
 * Rotates the image to the right 90 degrees
 */
void SlideView::rotateRightSlot()
{
    undoStack.push(theImage);

    QImage rotatedImage = QImage(NUMBER_OF_PIXEL,NUMBER_OF_PIXEL,QImage::Format_ARGB32);

    // this is the algorithm for rotating left, but somehow our picture comes out rotated right.

    for (int row = 0; row < NUMBER_OF_PIXEL; row++)
    {
        for (int col = NUMBER_OF_PIXEL-1, leftRow = 0; col >= 0; col--, leftRow++)
        {
            QRgb pix = theImage.pixel(row,col);
            rotatedImage.setPixel(leftRow, row, pix);
            qDebug() << "rotatedLeftImg: " << leftRow << " " << row;
            qDebug() << "image: " << row << " " << col;
        }
    }

    theImage = rotatedImage.copy();

    updateScene();
}


/**
 * Flips the image horizontally
 */
void SlideView::flipHorizontalSlot()
{
    undoStack.push(theImage);
    QImage rotatedImage = QImage(NUMBER_OF_PIXEL,NUMBER_OF_PIXEL,QImage::Format_ARGB32);

    // this algorithm is to rotate the image 90 degrees right, but somehow the image comes out flipped horizontal

    for (int row = 0, rotateCol = NUMBER_OF_PIXEL-1; row < NUMBER_OF_PIXEL; row++, rotateCol--)
    {
        for (int col = 0; col < NUMBER_OF_PIXEL; col++)
        {
            QRgb pix = theImage.pixel(row, col);
            rotatedImage.setPixel(rotateCol, col, pix);
        }
    }

    theImage = rotatedImage.copy();

    updateScene();
}


/**
 * Flips the image vertically
 */
void SlideView::flipVerticalSlot()
{
    undoStack.push(theImage);
    QImage flippedImage = QImage(NUMBER_OF_PIXEL,NUMBER_OF_PIXEL,QImage::Format_ARGB32);

    // this is the algorithm was for flipping horizontally, but somehow the image came out flipped vertically.
    for (int row = 0; row < NUMBER_OF_PIXEL; row++)
    {
        for (int col = NUMBER_OF_PIXEL-1, flipCol = 0; col >= 0; col--, flipCol++)
        {
            QRgb pix = theImage.pixel(row, col);
            flippedImage.setPixel(row, flipCol, pix);
        }
    }

    theImage = flippedImage.copy();
    updateScene();
}


//***************************************************START CODE FOR PAINT BUCKET*****************************************************************************

/**
 * Sets the SlideView into paint bucket mode or not into paint bucket mode depending on what the user wants
 */
void SlideView::paintBucketSlot()
{
    hasPaintBucket = !hasPaintBucket;  // every time the user clicks on fill button, paintbucket option is changed
    cout << hasPaintBucket << endl;
}

/**
 *  Does a paint bucket fill of the area selected by changing color of that area to the current color
 */
void SlideView::fillInArea(int pixelX, int pixelY)
{
    // problems:  If I click on a make shape first and paint bucket fill the shape, the program crashes
    // why are there so many pixels on the canvas when the QImage is only 32 by 32?
    // when filling in the whole canvas, the program crashes
    //
    // breadth first search to fill in area

    // put in the first pixel at (x,y) into a queue
    queue<QPoint> q;
    QPoint current(pixelX, pixelY);
    q.push(current);

    // get the current pixel color and fill in all neighboring pixels sharing the same color.  Thus fill in the area of the same color.
    QColor areaColor = theImage.pixelColor(pixelX, pixelY);
    int count = 0;

    // fill in the area user wants with paint-bucket color
    while(!q.empty())
    {

        pixelX = q.front().x();
        pixelY = q.front().y();
                q.pop();


    count++;
    if (count == 90000000)
    {
        updateScene();
        return;
    }


        theImage.setPixel(pixelX, pixelY, color);  // <---- color bleeding over


        // right neighbor
        if (isFillableNeighbor(pixelX + 1, pixelY, areaColor))
        {
            q.push(QPoint(pixelX + 1, pixelY));

           // cout << "right" << endl;
        }

        // left neighbor
        if(isFillableNeighbor(pixelX-1, pixelY, areaColor))
        {
            q.push(QPoint(pixelX - 1, pixelY));
           // cout << "left" << endl;
        }

        // bottom neighbor
        if(isFillableNeighbor(pixelX, pixelY + 1, areaColor))
        {
            q.push(QPoint(pixelX, pixelY + 1));
           // cout << "bottom" << endl;
        }

        // top neighbor
        if(isFillableNeighbor(pixelX, pixelY - 1, areaColor))
        {
            q.push(QPoint(pixelX, pixelY - 1));
          //  cout << "top" << endl;
        }


    }

    cout << "Done with paint bucket" << endl;
    updateScene();

}

/**
 * Checks to see if the x and y pass in fits within the sprite editor's canvas
 */
bool SlideView::isValidPoint(int pixelX, int pixelY)
{

    bool isvalid = (pixelX >= 0 && pixelX < NUMBER_OF_PIXEL && pixelY >= 0 && pixelY < NUMBER_OF_PIXEL);
    return isvalid;

}

/**
 * Checks whether the area color and the neighbor color matches.  Area color is what the user wants to fill in with paint bucket
 */
bool SlideView::hasAreaColor(QColor areaColor, QColor neighborColor)
{
    bool sameColor = (areaColor.red() == neighborColor.red() && areaColor.green() == neighborColor.green() && areaColor.blue() == neighborColor.blue());
    return sameColor;
}


/**
 * Returns true if the neighbor's x, y, and color are from the area that user wants to fill in with paint bucket
 */
bool SlideView::isFillableNeighbor(int pixelX, int pixelY, QColor areaColor)
{
    bool isFillable = (isValidPoint(pixelX, pixelY) && hasAreaColor(areaColor, theImage.pixelColor(pixelX, pixelY)));
    return isFillable;
}


//***************************************************END CODE FOR PAINT BUCKET*****************************************************************************


/*
 *draws a line to Qimage
*/
void SlideView::drawLine(int x1, int y1, int x2, int y2)
{
    QPainter line(&theImage);
    QPen pen(color);
    pen.setWidthF(shapeWidth);
    line.setPen(pen);
    //int width = scaledPixelWidth * shapeWidth;
    //line.pen().setWidth(width);
    QLineF drawLine(x1, y1, x2, y2);
    line.drawLine(drawLine);
}

void SlideView::drawCirle(int x1, int y1, int w, int h)
{
    QPainter paint(&theImage);
    QPen pen(color);
    pen.setWidthF(shapeWidth);
    paint.setPen(pen);
    //QRect circle(x1, y1, w - x1, h - y1);
    if(fillShape){
        QBrush brush (color);
        paint.setBrush(brush);
    }
    paint.drawEllipse(x1, y1, w - x1, h - y1);


}

void SlideView::drawSquare(int x1, int y1, int w, int h)
{
    QPainter paint(&theImage);
    QPen pen(color);
    pen.setWidthF(shapeWidth);
    paint.setPen(pen);
    QRect rect(x1, y1, w - x1, h - y1);

    if(fillShape)
    {
        paint.fillRect(rect, color);
    }
    else
    {
        paint.drawRect(x1, y1, w - x1, h - y1);
    }

}
/*
sets if the shpae needs to be filled or not
*/
void SlideView::setFill(bool fill)
{
    fillShape = fill;
}

/*
 * set width of shape pixel
 *
 */
void SlideView::setShapeWidth(int w)
{
    shapeWidth = w;
}

/*
 * set width of the paint PIxel
 */

void SlideView::setPaintWidth(int w)
{
    paintWidth = w;
}

void SlideView::brush(int x, int y){
    QPainter paint(&theImage);
    QRect rect(x, y, paintWidth, paintWidth);
    paint.fillRect(rect, color);

}


/**
 * Updates the color palette while previewing colors with eyedropper tool
 */
void SlideView::updatePalettePreview(QColor previewColor)
{
    emit updatePalettePreviewSignal(previewColor);
}

