#pragma once

class dot
{
private:
	int x,y,r;
	bool leftmove, upmove;
	int color_R, color_B, color_G;
public:
	dot();
	void set_x(int x);
	int get_x();
	void set_y(int y);
	int get_y();
	void set_leftmove(bool leftmove);
	bool get_leftmove();
	void set_upmove(bool upmove);
	bool get_upmove();
	void move1();
	void move2();
	void drowpoint();
};

