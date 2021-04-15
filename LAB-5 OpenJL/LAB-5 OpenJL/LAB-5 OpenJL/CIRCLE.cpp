#include "CIRCLE.h"
#include "foo.h"

CIRCLE::CIRCLE()
{
    x = rand() % 640;
    y = rand() % 480;
    r = 10;
    color_R = rand() % 255;
    color_B = rand() % 255;
    color_G = rand() % 255;
}

void CIRCLE::set_r(int r)
{
    this->r = r;
}

int CIRCLE::get_r()
{
    return r;
}

void CIRCLE::drow()
{
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(color_R, color_G, color_B);
    glVertex2f(x, y);

    for (size_t i = 10; i <= 370; i += 10)
    {
        float _x = r * cos(i * 3.14 / 180);
        float _y = r * sin(i * 3.14 / 180);
        glColor3ub(color_R, color_G, color_B);
        glVertex2f(x + _x, y + _y);
    }
    glEnd();
}

void CIRCLE::move2()
{
}

void CIRCLE::move1()
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
    if (x - r <= 1)
    {
        upmove = false;
    }
    if (x + r >= 630)
    {
        upmove = true;
    }
}
