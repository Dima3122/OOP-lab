#include "foo.h"

dot a;
CIRCLE d;
LINE_SEGMENT c;
triangle z;
RECTANGLE g;
ellipse n;
rhombus m;
vector<FIG*> myVector;
bool inilicaizatiaon = false;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    if (inilicaizatiaon == false)
    {
        init();
    }
    for (int i = 0; i < 7; i++)
    {
        myVector[i]->move1();
        myVector[i]->drow();
    }
    glFlush();
}

void init()
{
    myVector.push_back(&a);
    myVector.push_back(&d);
    myVector.push_back(&c);
    myVector.push_back(&z);
    myVector.push_back(&g);
    myVector.push_back(&n);
    myVector.push_back(&m);
    inilicaizatiaon = true;
}

void TimerFunction(int)
{
    glutPostRedisplay();
    glutTimerFunc(50, TimerFunction, 1);
}