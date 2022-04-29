#include "Rectangle.h"

Rectangle::Rectangle(float w, float h)
{
	width = w;
	height = h;
}
void Rectangle::Input(istream& in)
{
	in >> width >> height;
}
float Rectangle::Area()
{
	return height * width;
}
