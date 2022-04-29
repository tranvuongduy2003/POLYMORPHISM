#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "Figure.h"
#include "Ellipse.h"
#include "Circle.h"
#include "Triangle.h"
using namespace std;

Figure* FigureMaxArea(Figure* figs[], int nFig)
{
	Figure* figMax = nullptr;
	if (nFig > 0)
	{
		figMax = figs[0];
		for (int i = 0; i < nFig; i++)
			if (figs[i]->Area() >= figMax->Area())
				figMax = figs[i];
	}
	return figMax;
}

int main()
{
	Figure* Figs[] = { new Rectangle(9.3F, 9.7F), new Circle(4.5F),
					   new Ellipse(4.2F, 4.7F), new Square(9.5F),
					   new Triangle(10.7F, 6.4F), new Ellipse(3.7F, 7.8F) };
	int nFig = sizeof(Figs) / sizeof(Figure*);
	Figure* aFig = FigureMaxArea(Figs, nFig);
	if (aFig != nullptr)
		cout << aFig->Area() << endl;

	Rectangle* pRec;
	Rectangle Rec;
	Square Sq;

	cout << "Rectangle's sizes (width and height): ";
	pRec = &Rec;
	pRec->Input(cin);
	cout << "Rectangle's area = " << Rec.Area() << endl;

	cout << "Square's sizes: ";
	pRec = &Sq;
	pRec->Input(cin);
	cout << "Square's area = " << Sq.Area() << endl;

	return 0;
}