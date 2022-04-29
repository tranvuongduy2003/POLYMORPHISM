#include "Square.h"

Square::Square(float a)
{
	width = height = a;
}
void Square::Input(istream& in)
{
	in >> width;
	height = width;
}
