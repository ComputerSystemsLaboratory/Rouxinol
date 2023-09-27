
/* vo05_04.cpp */
#include <iostream>
#include <cstdio>
using namespace std;

double m_round(double d);

int main()
{
	double a, b, c, d, e, f;;
	double x, y;

	while (true) {

		cin >> a >> b >> c >> d >> e >> f;
		if (cin.eof()) break;

		x = (c*e - f*b) / (a*e - d*b);
		y = (a*f - d*c) / (a*e - d*b);

		x = m_round(x); y = m_round(y);

		printf("%.3f %.3f\n", x, y);
	}

	return 0;
}

double m_round(double d)
{
	if (d == 0) { d = 0; return d; }

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