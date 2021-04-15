#include "rhombus.h"

rhombus::rhombus()
{
    x = rand() % 640;
    y = rand() % 480;
    q = rand() % 90;
    color_R = rand() % 254;
    color_B = rand() % 254;
    color_G = rand() % 254;
    i = 0;
    x0 = (x + x2) / 2;
    y0 = (y + y2) / 2;
    d1 = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
    d2 = sqrt((x2 - x0) * (x2 - x0) + (y2 - y0) * (y2 - y0));
    i1 = asin((x - x0) / d1) * 180;
    i2 = asin((x2 - x0) / d2) * 180;
}

void rhombus::set_x2(int x2)
{
    this->x2 = x2;
}

void rhombus::set_y2(int y2)
{
    this->y2 = y2;
}

void rhombus::set_q(int q)
{
    this->q = q;
}

int rhombus::get_x2()
{
    return x2;
}

int rhombus::get_y2()
{
    return y2;
}

int rhombus::get_q()
{
    return q;
}

void rhombus::drow()
{
    x2 = x + q;
    y2 = y + q;
    glColor3ub(color_R, color_B, color_G);
    glRectd(x, y, x2, y2);
}

void rhombus::move1()
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
    if (x <= 1 || x2 <= 1)
    {
        upmove = false;
    }
    if (x >= 630 || x2 >= 630)
    {
        upmove = true;
    }
}

void rhombus::move2()
{
    if (i >= 360)
    {
        i = 0;
    }
    else
    {
        i += 10;
    }
    x = x0 + 100 * cos((i + i1) * 3.14 / 180);
    y = y0 + 100 * sin((i + i1) * 3.14 / 180);

    x2 = x0 + 100 * cos((i+i2) * 3.14 / 180);
    y2 = y0 + 100 * sin((i+i2) * 3.14 / 180);
}
