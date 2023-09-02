#include "Shape.h"

void Rectangle::Area()
{
	
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
	cout << "Area of reactangle - " << getArea() << " smth\n";
}
