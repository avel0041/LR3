#pragma once
#include <iostream>
using namespace std;
class Rectangle
{
protected:
	double a, b;
public:
	Rectangle();
	Rectangle(double p, double q);
	virtual double AreaCount();
	virtual void print();
};
