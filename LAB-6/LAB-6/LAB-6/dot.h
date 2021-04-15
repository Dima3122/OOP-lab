#pragma once

class dot
{
protected:
	int x, y;
	bool leftmove, upmove;
	int color_R, color_B, color_G;
public:
	dot();
	void set_x(int x);
	void set_y(int y);
	void set_leftmove(bool leftmove);
	void set_upmove(bool upmove);
	void set_color_R(int color_r);
	void set_color_G(int color_g);
	void set_color_B(int color_b);

	int get_x();
	int get_y();
	bool get_leftmove();
	bool get_upmove();
	int get_color_R();
	int get_color_G();
	int get_color_B();

	void move1();
	void move2();
	void drow();
};
