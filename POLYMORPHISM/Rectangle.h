#pragma once
#ifndef _Rectangle_h
#define _Rectangle_h
#include "Figure.h"
#include <iostream>
using namespace std;

class Rectangle : public Figure
{
protected:
	float width, height;
public:
	Rectangle(float a = 0, float b = 0);
	virtual float Area();
	virtual void Input(istream& in);
};

#endif
