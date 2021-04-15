#include "foo.h"

dot::dot()
{
    x = rand() % 640;
    y = rand() % 480;
    color_R = rand() % 255;
    color_G = rand() % 255;
    color_B = rand() % 255;
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

void dot::set_color_R(int color_r)
{
    this->color_R = color_r;
}

void dot::set_color_G(int color_g)
{
    this->color_G = color_g;
}

void dot::set_color_B(int color_b)
{
    this->color_B = color_b;
}

bool dot::get_upmove()
{
    return upmove;
}

int dot::get_color_R()
{
    return color_G;
}

int dot::get_color_G()
{
    return color_G;
}

int dot::get_color_B()
{
    return color_B;
}

void dot::move1()
{
    if (upmove == true)
    {
        x = x - 10;
    }
    if (upmove == false)
    {
        x = x + 10;
    }
    if (y <= 10)
    {
        leftmove = true;
    }
    if (y >= glutGet(GLUT_WINDOW_HEIGHT) - 10)
    {
        leftmove = false;
    }
    if (x <= 1)
    {
        upmove = false;
    }
    if (x >= 630)
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
    if (y <= 10)
    {
        leftmove = true;
    }
    if (y >= glutGet(GLUT_WINDOW_HEIGHT) - 10)
    {
        leftmove = false;
    }
    if (x <= 1)
    {
        upmove = false;
    }
    if (x >= 630)
    {
        upmove = true;
    }
}

void dot::drow()
{
    glBegin(GL_POINTS);
    glVertex2f(x, y);
    glColor3ub(color_R, color_G, color_B);
    glEnd();
}