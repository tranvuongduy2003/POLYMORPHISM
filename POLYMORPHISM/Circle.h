#pragma once
#ifndef _Circle_h
#define _Circle_h
#include "Ellipse.h"

class Circle : public Ellipse
{
public:
	Circle(float r = 0);
	virtual void Input(istream& in);
};
#endif

