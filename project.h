#ifndef PROJECT_H
#define PROJECT_H
#include <string>
#include <stack>
#include <list>
#include "frame.h"


class Project
{
    std::string fileName;

    //if current implementation doesn't work use pointer or references
    std::list<Frame> framesList;
    //const int WIDTH;
    //const int HEIGHT;
    int width;
    int height;



public:
    Project(std::string name = "untitled", int width = 10, int height = 10);
    Frame getFrame(int index);
};

#endif // PROJECT_H
