#include "foo.h"
#include "glut.h"
dot d;
Line_segment l;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    d.drow();
    l.drow();
    glFlush();
}

void TimerFunction(int)
{
    glutPostRedisplay();
    glutTimerFunc(50, TimerFunction, 1);
}