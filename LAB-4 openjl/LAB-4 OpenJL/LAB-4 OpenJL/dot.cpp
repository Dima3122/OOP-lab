#include "dot.h"
#include "foo.h"

dot::dot()
{
    x = rand() % 640;
    y = rand() % 480;
    r = 3;
    color_R = rand() % 255;
    color_B = rand() % 255;
    color_G = rand() % 255;
}

void dot::set_x(int x)
{
	this->x = x;
}

int dot::get_x()
{
	return x;
}

void dot::set_y(int y)
{
	this->y = y;
}

int dot::get_y()
{
	return y;
}

void dot::set_leftmove(bool leftmove)
{
	this->leftmove = leftmove;
}

bool dot::get_leftmove()
{
	return leftmove;
}

void dot::set_upmove(bool upmove)
{
	this->upmove = upmove;
}

bool dot::get_upmove()
{
	return upmove;
}

void dot::move1()
{
    if (leftmove == true)
    {
        y = y + 10;
    }
    if (leftmove == false)
    {
        y = y - 10;
    }
    if (upmove == true)
    {
        x = x - 10;
    }
    if (upmove == false)
    {
        x = x + 10;
    }
    if (y <= 10)//вверх
    {
        leftmove = true;
    }
    if (y >= glutGet(GLUT_WINDOW_HEIGHT) - 10)//вниз
    {
        leftmove = false;
    }
    if (x <= 1)//левая граница
    {
        upmove = false;
    }
    if (x >= 630)//правая граница
    {
        upmove = true;
    }
}

void dot::move2()
{
    if (upmove == true)
    {
        x = x - 10;
    }
    if (upmove == false)
    {
        x = x + 10;
    }
    if (y <= 10)//вверх
    {
        leftmove = true;
    }
    if (y >= glutGet(GLUT_WINDOW_HEIGHT) - 10)//вниз
    {
        leftmove = false;
    }
    if (x <= 1)//левая граница
    {
        upmove = false;
    }
    if (x >= 630)//правая граница
    {
        upmove = true;
    }
}

void dot::drowpoint()
{
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(color_R, color_G, color_B);
    glVertex2f(x, y);
    
    for (size_t i = 10; i < 360; i+=10)
    {
        float _x = r * cos(i * 3.14 / 180);
        float _y = r * sin(i * 3.14 / 180);
        glColor3ub(color_R, color_G, color_B);
        glVertex2f(x+_x, y+_y);
    }
    glEnd();
}

