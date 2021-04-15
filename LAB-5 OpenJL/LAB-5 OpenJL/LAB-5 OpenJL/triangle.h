#pragma once
#include "foo.h"

class triangle: public dot
{
private:
	int x2, y2, x3, y3, i, x0 , y0;
	float d1, d2, d3, i1, i2, i3;
public:
	triangle();

	void set_x2(int x2);
	void set_y2(int y2);
	void set_x3(int x3);
	void set_y3(int y3);

	int get_x2();
	int get_y2();
	int get_x3();
	int get_y3();

	void drow() override;
	void move1() override;
	void move2() override;
};

