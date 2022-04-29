#include "Ellipse.h"

Ellipse::Ellipse(float a, float b)
{
	Ra = a; Rb = b;
}
void Ellipse::Input(istream& in)
{
	in >> Ra >> Rb;
}
float Ellipse::Area()
{
	return PI * Ra * Rb;
}