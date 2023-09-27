#include <iostream>
#include <cmath>

using namespace std;

double square(double, double, double, double, double, double);

int main() {

	double x1, y1, x2, y2, x3, y3, xp, yp, S123, SP12, SP23, SP31;

	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
		S123=square(x1, y1, x2, y2, x3, y3);
		SP12=square(xp, yp, x1, y1, x2, y2);
		SP23=square(xp, yp, x2, y2, x3, y3);
		SP31=square(xp, yp, x3, y3, x1, y1);

		if(S123==SP12+SP23+SP31)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;

}

double square(double x1, double y1, double x2, double y2, double x3, double y3) {

	double a, b, c, d;

	a=x2-x1;
	b=y2-y1;
	c=x3-x1;
	d=y3-y1;

	return abs(a*d-c*b)/2;

}