#include<iostream>
#include "Shape.h"
using namespace std;

void Area(Shape& shape) { shape.Area(); }

int main()
{
	Area(*new Rectangle());
	system("pause");
	return 0;
}