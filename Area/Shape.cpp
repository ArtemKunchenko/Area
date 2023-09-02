#include "Shape.h"

void Rectangle::Area()
{
	cout << "RECTANGLE\n";
	do
	{
		cout << "Input value of side \"a\"(can't be 0): ";
		cin >> _a;
		if (_a != 0)break;
		cout << "Invalid value!!!\n\n";

	} while (_a == 0);
	do
	{
		cout << "Input value of side \"b\"(can't be 0): ";
		cin >> _b;
		if (_b != 0)break;
		cout << "Invalid value!!!\n\n";

	} while (_b == 0);
	setArea(_a * _b);
	cout << "Area of reactangle - " << getArea() << " smth\n\n";
}

void RightTriangle::Area()
{
	cout << "RIGHT-ANGLED TRIANGLE\n";
	do
	{
		cout << "Input value of leg \"a\"(can't be 0): ";
		cin >> _a;
		if (_a != 0)break;
		cout << "Invalid value!!!\n\n";

	} while (_a == 0);
	do
	{
		cout << "Input value of leg \"b\"(can't be 0): ";
		cin >> _b;
		if (_b != 0)break;
		cout << "Invalid value!!!\n\n";

	} while (_b == 0);
	setArea((_a * _b)/2);
	cout << "Area of right-angled triangle - " << getArea() << " smth\n\n";
}

void Circle::Area()
{
	cout << "CIRCLE\n";
	do
	{
		cout << "Input value of radius (can't be 0): ";
		cin >> _radius;
		if (_radius != 0)break;
		cout << "Invalid value!!!\n\n";

	} while (_radius == 0);
	
	setArea(_pi*(_radius*_radius));
	cout << "Area of circle - " << getArea() << " smth\n\n";
}
