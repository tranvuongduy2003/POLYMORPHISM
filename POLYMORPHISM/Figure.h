#pragma once
#ifndef _Figure_h
#define _Figure_h
#include <iostream>
using namespace std;

class Figure
{
public:
	//Figure();
	virtual void Input(istream& in) = 0;
	virtual float Area() = 0;
};
#endif 
