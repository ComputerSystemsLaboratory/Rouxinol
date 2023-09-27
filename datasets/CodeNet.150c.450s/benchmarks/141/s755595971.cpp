#include <iostream>
using namespace std;

bool ss(double a, double b, double c, double u, double v, double x, double y) {
	if ((a * u + b * v + c) * (a * x + b * y + c) > 0) {
		return true;
	}
	else
		return false;
}

int main()
{
	double x1, y1, x2, y2, x3, y3, xp, yp;
		
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
		if (ss(y1 - y2, x2 - x1, x1 * y2 - x2 * y1, x3, y3, xp, yp) &&
			ss(y2 - y3, x3 - x2, x2 * y3 - x3 * y2, x1, y1, xp, yp) &&
			ss(y3 - y1, x1 - x3, x3 * y1 - x1 * y3, x2, y2, xp, yp))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
