#include "project.h"
#include "gif.h"

Project::Project()
{

}

Project::Project(std::string name, SlideView* frame, QObject *parent) : QObject(parent)
{
    framesList.push_back(frame);
}

SlideView* Project::getSlide(int index)
{
    unsigned n = index;
    std::list<SlideView*>::iterator it;

    if(framesList.size() > n)
    {
        it = framesList.begin();
        std::advance(it, n);
    }

    return *it;
}

void Project::addSlideAt(int index, SlideView* frame)
{
    unsigned n = index;
    std::list<SlideView*>::iterator it;
    if(framesList.size() > n)
    {
        it = framesList.begin();
        std::advance(it, n);
    }

    framesList.insert(it, frame);

}

void Project::addSlide(SlideView* frame)
{
    framesList.push_back(frame);

    qDebug()<< framesList.size();
}

void Project::addFrameSlot(SlideView* frame)
{
    Project::addSlide(frame);
}

size_t Project::getSizeList()
{
    return framesList.size();
}

void Project::exportGifSlot(std::string name)
{
//    std::cout<<name<<std::endl;
    name += ".gif";
    const char* cname = name.c_str();
    SlideView* slide = getSlide(0);
    int width = slide->getImage().width();
    int height = slide->getImage().height();
    int framesPerSec = 10; // Set this variable when we change the frame playback speed
    int delay = 100/framesPerSec; // This is the delay in 1/100th of a second. 5 corresponds to 25 frames per second
    GifWriter gifWrt;
    GifBegin(&gifWrt, cname, width, height, delay, 8, false);

    for(auto itr = framesList.begin(); itr != framesList.end(); ++itr)
    {
        SlideView* tempSlide = *itr;
        QImage tempImg = tempSlide->getImage().convertToFormat(QImage::Format_RGB32);
        width = tempImg.width();
        height = tempImg.height();
        GifWriteFrame(&gifWrt, tempImg.bits(), width, height, delay, 8, false);
//        std::cout<<"Writing frame"<<std::endl;
    }
    GifEnd(&gifWrt);
}

void Project::deleteAllSlidesAndRefresh()
{
    framesList.clear();

}
