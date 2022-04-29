#pragma once
#ifndef _Ellipse_h
#define _Ellipse_h
#define PI (float)3.14159
#include "Figure.h"
class Ellipse : public Figure
{
protected:
	float Ra, Rb;
public:
	Ellipse(float a = 0, float b = 0);
	virtual void Input(istream& in);
	virtual float Area();
};
#endif