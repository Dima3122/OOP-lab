#include "triangle.h"

triangle::triangle()
{
    x = rand() % 600;
    y = rand() % 400;
    x2 = rand() % 600;
    y2 = rand() % 400;
    x3 = rand() % 600;
    y3 = rand() % 400;
    color_R = rand() % 255;
    color_B = rand() % 255;
    color_G = rand() % 255;
    i = 0;
    x0 = (x + x2 + x3) / 3;
    y0 = (y + y2 + y3) / 3;
    d1 = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
    d2 = sqrt((x2 - x0) * (x2 - x0) + (y2 - y0) * (y2 - y0));
    d3 = sqrt((x3 - x0) * (x3 - x0) + (y3 - y0) * (y3 - y0));
    i1 = asin((x - x0) / d1) * 180;
    i2 = asin((x2 - x0) / d2) * 180;
    i3 = asin((x3 - x0) / d3) * 180;
}

void triangle::set_x2(int x2)
{
    this->x2 = x2;
}

void triangle::set_y2(int y2)
{
    this->y2 = y2;
}

void triangle::set_x3(int x3)
{
    this->x3 = x3;
}

void triangle::set_y3(int y3)
{
    this->y3 = y3;
}

int triangle::get_x2()
{
    return x2;
}

int triangle::get_y2()
{
    return y2;
}

int triangle::get_x3()
{
    return x3;
}

int triangle::get_y3()
{
    return y3;
}

void triangle::drow()
{
    glColor3ub(color_R, color_B, color_G);
    glBegin(GL_TRIANGLES);
    glVertex2f(x, y);
    glVertex2f(x2, y2);
    glVertex2f(x3, y3);
    glEnd();
}

void triangle::move1()
{
    if (upmove == true)
    {
        x = x - 10;
    }
    if (upmove == false)
    {
        x = x + 10;
    }
    if (upmove == true)
    {
        x2 = x2 - 10;
    }
    if (upmove == false)
    {
        x2 = x2 + 10;
    }
    if (upmove == true)
    {
        x3 = x3 - 10;
    }
    if (upmove == false)
    {
        x3 = x3 + 10;
    }
    if (x <= 1 || x2 <= 1 || x3 <= 1)
    {
        upmove = false;
    }
    if (x >= 630 || x2 >= 630 || x3 >= 630)
    {
        upmove = true;
    }
}

void triangle::move2()
{
    if (i >= 360)
    {
        i = 0;
    }
    else
    {
        i += 10;
    }
    x = x0 + d1 * cos((i + i1) * 3.14 / 180);
    y = y0 + d1 * sin((i + i1) * 3.14 / 180);

    x2 = x0 + d2 * cos((i + i2) * 3.14 / 180);
    y2 = y0 + d2 * sin((i + i2) * 3.14 / 180);

    x3 = x0 + d3 * cos((i + i3) * 3.14 / 180);
    y3 = y0 + d3 * sin((i + i3) * 3.14 / 180);
}
