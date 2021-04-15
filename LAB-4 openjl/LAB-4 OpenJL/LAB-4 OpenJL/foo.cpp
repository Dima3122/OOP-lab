#include "foo.h"
#include "dot.h"

dot box[99];

void DrawPoint(float x, float y)
{
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POINTS);
    glVertex2f(x, y);
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //Draws
    for (size_t i = 0; i < 99; i++)
    {
        if (i % 4 == 0)
        {
            box[i].move2();
            box[i].drowpoint();
        }
        else
        {
            box[i].move1();
            box[i].drowpoint();
        }
    }
    //
    glFlush();
}

void TimerFunction(int) 
{
    glutPostRedisplay();
    glutTimerFunc(50, TimerFunction, 1);//вызывает указанную функцию раз в 10 миллисекунд
}