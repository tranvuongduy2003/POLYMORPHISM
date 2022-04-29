#pragma once
#ifndef _Triangle_h
#define _Triangle_h
#include "Figure.h"

class Triangle : public Figure
{
protected:
	float basesize, height;
public:
	Triangle(float a = 0, float h = 0);
	virtual void Input(istream& in);
	virtual float Area();
};
#endif
