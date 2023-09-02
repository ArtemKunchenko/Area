#pragma once
#include<iostream>
using namespace std;

class Shape
{
public:
	virtual void Area() = 0;
protected:
	void setArea(double area) { _area = area; }
	double getArea() { return _area; }
private:
	double _area;
};

class Rectangle : public Shape
{
public:
	void Area() override;
private:
	double _a;
	double _b;
};
class RightTriangle : public Shape
{
public:
	void Area() override;
private:
	double _a;
	double _b;
};
class Circle : public Shape
{
public:
	void Area() override;
private:
	double _radius;
	const double _pi=3.14;
};

