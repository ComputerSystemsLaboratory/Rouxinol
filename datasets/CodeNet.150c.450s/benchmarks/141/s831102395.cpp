#include <iostream>
#include <cmath>

using namespace std;

bool cross(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
	double ab=(y1-y2)/(x1-x2)*(x3-x1)+y1, cd=(y1-y2)/(x1-x2)*(x4-x1)+y1;
	if ((ab>y3&&cd>y4)||(ab<y3&&cd<y4)) return false;
	return true;
}

int main() {
	double x1, x2, x3, y1, y2, y3, xp ,yp;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
		double xm = (x1+x2+x3)/3, ym = (y1+y2+y3)/3;
		if (cross(x1,y1,x2,y2,xm,ym,xp,yp)||cross(x2,y2,x3,y3,xm,ym,xp,yp)||cross(x3,y3,x1,y1,xm,ym,xp,yp)) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
	return 0;
}