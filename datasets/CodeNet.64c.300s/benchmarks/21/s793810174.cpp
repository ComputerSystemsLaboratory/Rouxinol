
/* vo00_04.cpp */
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
using namespace std;

int is_double(double dl);
double m_round(double d);
int dmax(int d1, int d2) { return (d1 < d2) ? d2 : d1; }

int main()
{
	double x1, y1, a1;
	double x2, y2, a2;
	double x, y;
	bool f_x, f_y;

	while (true) {
		cin >> x1 >> y1 >> a1 >> x2 >> y2 >> a2;
		if (cin.eof()) break;
		


		f_x = false; f_y = false;

		int p = dmax(dmax(is_double(x1), is_double(x2)), dmax(is_double(y1), is_double(y2)));
		if (p) { p *= 10; x1 *= p; x2 *= p; y1 *= p; y2 *= p; }

		if (x1 && x2 && (y1 || y2)) {
			int temp = x1;
			x1 *= x2; y1 *= x2; a1 *= x2;
			x2 *= temp; y2 *= temp; a2 *= temp;

			double y3 = y2 - y1, a3 = a2 - a1;

			y = a3 / y3;
			f_y = true;
		}

		if (y1 && y2 && (x1 || x2)) {
			int temp = y1;
			x1 *= y2; y1 *= y2; a1 *= y2;
			x2 *= temp; y2 *= temp; a2 *= temp;

			double x3 = x2 - x1, a3 = a2 - a1;

			x = a3 / x3;

			f_x = true;
		}

		if (!f_x || !f_y) {
			// どちらかに0があれば
			if (!x1) { y = a1 / y1; f_y = true; }
			else if (!x2) { y = a2 / y2; f_y = true; }

			if (!y1) { x = a1 / x1; f_x = true; }
			else if (!y2) { x = a2 / x2; f_x = true; }

			if (f_x && !f_y) {

				if (!y1 && !y2) { y = 0; }

				else if (x1 && y1) { x1 *= x; a1 -= x1; y = a1 / y1; }
				else if (x2 && y2){ x2 *= x; a2 -= x2; y = a2 / y2; }

				f_y = true;
			}
			if (f_y && !f_x) {

				if (!x1 && !x2) { x = 0; }

				else if (y1 && x1) { y1 *= y; a1 -= y1; x = a1 / x1; }
				else if (y2 && x2) { y2 *= y; a2 -= y2; x = a2 / x2; }
				
				f_x = true;
			}
		}

		if (f_x && f_y) {
			x = m_round(x); y = m_round(y);
			printf("%.3lf %.3lf\n", x, y);
		}
	}

	return 0;
}

int is_double(double dl)
{
	dl = fabs(dl);
	int d = (int)dl;
	double temp = dl - (double)d;

	if (!temp) return 0;

	else {
		int i;
		for (i = 0; temp < 1; ++i) temp *= 10;

		return i;
	}
}

double m_round(double d)
{
	bool flag = false;
	if (d < 0) { flag = true; d = -d; }

	d *= 1000;
	d += 0.5;

	int t1 = (int)d;
	double t2 = d - (double)t1;
	d -= t2;

	d /= 1000;

	if (flag) { d = -d; }

	return d;
}