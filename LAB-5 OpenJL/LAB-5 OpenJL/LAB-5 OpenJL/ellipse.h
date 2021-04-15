#pragma once
#include "foo.h"

class ellipse: public CIRCLE
{
public:
	ellipse();
	void drow() override;
	void move1() override;
	void move2() override;
};

