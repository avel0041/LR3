#pragma once
#include "Rectangle.h"
#include <iostream>
using namespace std;
class Cube :public Rectangle
{
	double h;
public:
	Cube(double p, double q, double d);
	void print();
	double AreaCount();
};

