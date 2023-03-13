#include "point.h"
#include <iostream>
#include <cmath>

using namespace std;

point::point() {
	x = 0;
	y = 0;
}


point::point(float X, float Y) {
	x = X;
	y = Y;
}






void point::setx(float q) {
	x = q;
}


void point::sety(float q) {
	y = q;
}





float point::getx() {
	return x;
}



float point::gety() {
	return y;
}





void point::display() {
	cout << "(" << x << "," << y << ")" << endl;
}




float point::distance(point f) {
	float m = (x - f.getx()) * (x - f.getx());
	float n= (y - f.gety()) * (y - f.gety());

	float result = sqrt(m + n);
	return result;
}




