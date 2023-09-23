#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

double a, b, c, d, e, f;
double tmp_x, tmp_y, tmp;

int main()
{
	while (cin >> a >> b >> c >> d >> e >> f) {
		tmp_y = (d*c - a*f) / (d*b - a*e);
		tmp_x = (c - b*tmp_y) / a;
		printf("%.3f %.3f\n", tmp_x, tmp_y);
	}
	return 0;
}