#include "LINE_SEGMENT.h"
#include "foo.h"

LINE_SEGMENT::LINE_SEGMENT()
{
    x = rand() % 640;
    y = rand() % 480;
    x2 = rand() % 640;
    y2 = rand() % 480;
    color_R = rand() % 255;
    color_B = rand() % 255;
    color_G = rand() % 255;
    i = 0;
    x0 = (x + x2) / 2;
    y0 = (y + y2) / 2;
    d1 = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
    d2 = sqrt((x2 - x0) * (x2 - x0) + (y2 - y0) * (y2 - y0));
    i1 = asin((x - x0) / d1) * 180;
    i2 = asin((x2 - x0) / d2) * 180;
}

void LINE_SEGMENT::set_x2(int x2)
{
    this->x2 = x2;
}

void LINE_SEGMENT::set_y2(int y2)
{
    this->y2 = y2;
}

int LINE_SEGMENT::get_x2()
{
    return x2;
}

int LINE_SEGMENT::get_y2()
{
    return y2;
}

void LINE_SEGMENT::drow()
{
    glBegin(GL_LINES);
    glVertex2f(x, y);
    glVertex2f(x2, y2);
    glEnd();
}

void LINE_SEGMENT::move1()
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
    if (x >= 630 || x2 >=630)
    {
        upmove = true;
    }
}

void LINE_SEGMENT::move2()
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
}
