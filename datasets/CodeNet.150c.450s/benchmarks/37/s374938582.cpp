#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	long double a, b, c, d, e, f, x, y;
	while (cin >> a >> b >> c >> d >> e >> f) {
		x = (long double)(b*f - e * c) / (d*b - a * e);
		y = (long double)(a*f - d * c) / (a*e - d * b);
		if (x < 0)
			x = (long double)((int)(x * 1000 - 0.5)) / 1000;
		else
			x = (long double)((int)(x * 1000 + 0.5)) / 1000;
		if (y < 0)
			y = (long double)((int)(y * 1000 - 0.5)) / 1000;
		else
			y = (long double)((int)(y * 1000 + 0.5)) / 1000;
		printf("%.3llf %.3llf\n", x, y);
	}
	return 0;
}
