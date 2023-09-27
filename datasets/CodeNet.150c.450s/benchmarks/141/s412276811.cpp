#include <iostream>

using namespace std;

double line(double x, double y, double ax, double ay, double bx, double by) {
	return (y-ay)*(bx-ax)-(x-ax)*(by-ay);
}

int main(void) {
	double x1, x2, x3, xp, y1, y2, y3, yp;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
		if (
				line(x1,y1,x2,y2,x3,y3)*line(xp,yp,x2,y2,x3,y3) > 0.0 &&
				line(x2,y2,x3,y3,x1,y1)*line(xp,yp,x3,y3,x1,y1) > 0.0 &&
				line(x3,y3,x1,y1,x2,y2)*line(xp,yp,x1,y1,x2,y2) > 0.0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}