#include <iostream>
using namespace std;

int main() {
	double x1, y1, x2, y2, x3, y3, xp, yp;
	double vx1, vy1, vx2, vy2, vxp, vyp;
	double s, t;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
		vx1 = x2 - x1;
		vy1 = y2 - y1;
		vx2 = x3 - x1;
		vy2 = y3 - y1;
		vxp = xp - x1;
		vyp = yp - y1;
		s = (vyp*vx2 - vxp*vy2) / (vy1*vx2 - vx1*vy2);
		if (vx2) {
			t = (vxp - vx1*s) / vx2;
		} else {
			t = (vyp - vy1*s) / vy2;
		}

		if (s>0.0 && t>0.0 && s + t<1.0) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}