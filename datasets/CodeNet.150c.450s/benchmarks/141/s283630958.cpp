#include <iostream>

using namespace std;

int main()
{
	double x1, y1, x2, y2, x3, y3;
	double xp, yp;
	
	while ( cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp ) {
		x1 -= x3; x2 -= x3; xp -= x3;
		y1 -= y3; y2 -= y3; yp -= y3;
		double D = x1*y2 - x2*y1;
		double s = ( y2*xp - x2*yp) / D; s+=0;
		double t = (-y1*xp + x1*yp) / D; t+=0;
		
		if ((0.0 <= s) && (0.0 <= t) && (s+t <= 1.0)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}