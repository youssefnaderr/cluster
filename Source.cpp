#include "point.h"
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;


point center(point *p,int n) {
	float sumx = 0;
	float sumy = 0;

	for (int i = 0; i < n; i++) {
		sumx += p[i].getx();
		sumy += p[i].gety();
	}

	point result(sumx / n, sumy / n);
	return result;
}



point closest(point p, point a, point b) {
	if (p.distance(a) <= p.distance(b)) {
		cout << "cluster A" << endl;
		return a;
	}
	else {
		cout << "cluster B" << endl;
		return b; }

}



int main() {
	srand(time(0));

	point* clustera = new point[50];
	point* clusterb = new point[50];


	for (int i = 0; i < 50; i++) {
		clustera[i].setx((rand() % 19) + 71);
		clustera[i].sety((rand() % 19) + 71);
	}


	for (int i = 0; i < 50; i++) {
		clusterb[i].setx((rand() % 19) + 21);
		clusterb[i].sety((rand() % 19) + 21);
	}


	point A = center(clustera, 50);
	point B = center(clusterb, 50);

	for (int i = 0; i < 20; i++) {
		point p((rand() % 94) + 6, (rand() % 94) + 6);
		cout << "point " << i+1 << " is closest to: ";
		point result = closest(p, A, B);
			
	}


	
}




