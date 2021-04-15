#pragma once
#include "foo.h"

class rhombus: public dot
{
private:
	int x2, y2, q, x0, y0, i;
	float d1, d2, i1, i2;
public:
	rhombus();

	void set_x2(int x2);
	void set_y2(int y2);
	void set_q(int q);

	int get_x2();
	int get_y2();
	int get_q();

	void drow() override;
	void move1() override;
	void move2() override;
};

