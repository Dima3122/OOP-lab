#pragma once
#include "dot.h"

class Line_segment: public dot
{
protected:
	int x2, y2, x0, y0, i;
	float d1, d2, i1, i2;
public:
	Line_segment();

	void set_x2(int x2);
	void set_y2(int y2);

	int get_x2();
	int get_y2();

	void drow();
	void move1();
	void move2();
};

