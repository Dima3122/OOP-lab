#pragma once
#include "dot.h"

class CIRCLE : public dot
{
protected:
	int r;

public:
	CIRCLE();
	
	void set_r(int r);

	int get_r();

	void drow(); 
	void move1();
	void move2();
};

