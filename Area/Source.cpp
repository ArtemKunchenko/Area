#include<iostream>
#include "Shape.h"
using namespace std;

void Area(Shape& shape) { shape.Area(); }

int main()
{
	/*Area(*new Rectangle());*/
	/*Area(*new RightTriangle());*/
	/*Area(*new Circle());*/
	Area(*new Trapezoid());
	system("pause");
	return 0;
}