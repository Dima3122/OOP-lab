#pragma once
#include "foo.h"

class RECTANGLE: public dot
{
private:
	int x2, y2, i, x0, y0;
	float d1, d2, i1, i2;
public:
	RECTANGLE();

	void set_x2(int x2);
	void set_y2(int y2);

	int get_x2();
	int get_y2();

	void drow() override;
	void move1() override;
	void move2() override;
};

