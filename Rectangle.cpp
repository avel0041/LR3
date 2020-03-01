#include "Rectangle.h"
Rectangle::Rectangle() {
	a = 0; b = 0;
}
Rectangle::Rectangle(double q, double p) {
	a = q;
	b = p;
}
double Rectangle::AreaCount() {
	double S = a * b;
	return S;
}
void Rectangle::print() {
	cout << "a= " << a << endl << "b= " << b << endl;
	cout << "Area= " << AreaCount() << endl;
}