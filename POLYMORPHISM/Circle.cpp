#include "Circle.h"

Circle::Circle(float r): Ellipse(r, r) {}
//Circle::Circle(float r)
//{
//	Ellipse(r, r);
//}
//Circle::Circle(float r)
//{
//	Ra = Rb = r;
//}
void Circle::Input(istream& in)
{
	in >> Ra;
	Rb = Ra;
}
