#include "ellipse.h"

ellipse::ellipse()
{
    x = rand() % 640;
    y = rand() % 480;
    r = 40;
    color_R = rand() % 255;
    color_B = rand() % 255;
    color_G = rand() % 255;
}

void ellipse::drow()
{
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(color_R, color_G, color_B);
    glVertex2f(x, y);

    for (size_t i = 10; i <= 380; i += 10)
    {
        float _x = 1.5 * r * cos(i * 3.14 / 180);
        float _y = 1.11 *r * sin(i * 3.14 / 180);
        glColor3ub(color_R, color_G, color_B);
        glVertex2f(x + _x, y + _y);
    }
    glEnd();
}

void ellipse::move1()
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
    if (x - r - 20 <= 1)
    {
        upmove = false;
    }
    if (x + r + 20 >= 630)
    {
        upmove = true;
    }
}

void ellipse::move2()
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
    if (x - r - 20 <= 1)
    {
        upmove = false;
    }
    if (x + r + 20 >= 630)
    {
        upmove = true;
    }
}

