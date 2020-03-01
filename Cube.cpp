#include "Cube.h"
Cube::Cube(double p, double q, double d): Rectangle(p,q) {
	h = d;
}
double Cube::AreaCount() {
	double V = Rectangle::AreaCount() * h;
	return V;
}
void Cube::print() {
	cout << "h= " << h << endl;
	Rectangle::print();
}