#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <sstream>
#include <cstdio>
using namespace std;

// A Point in a Triangle(0012)
double area(const double x1, const double y1, const double x2, const double y2, const double x3, const double y3)
{
	double s = x1*y2 - x1*y3 + x2*y3 - x2*y1 + x3*y1 - x3*y2;
	if (s < 0)
		s = -s;
	return s / 2.0;
}

int main()
{
	double x1, y1, x2, y2, x3, y3, xp, yp;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
		double St = area(x1, y1, x2, y2, x3, y3);

		double S1 = area(x1, y1, x2, y2, xp, yp);
		double S2 = area(x2, y2, x3, y3, xp, yp);
		double S3 = area(x3, y3, x1, y1, xp, yp);

		if (S1 != 0 && S2 != 0 && S3 != 0 && S1+S2+S3 == St)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}