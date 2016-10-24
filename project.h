#ifndef PROJECT_H
#define PROJECT_H
#include <string>
#include <stack>
#include <list>
#include "frame.h"


class Project
{
    std::string fileName;
    std::stack<QObject> undo;
    std::stack<QObject> redo;
    //if current implementation doesn't work use pointer or references
    std::list<Frame> framesList;
    const int WIDTH;
    const int HEIGHT;



public:
    Project(std::string name = "untitled", int width = 1500, int height = 1500);
    Frame getFrame(int index);
};

#endif // PROJECT_H
