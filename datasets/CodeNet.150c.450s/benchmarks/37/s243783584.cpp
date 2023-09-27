#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
	double a, b, c, d, e, f, p, q, x, y;
	while (cin >> a >> b >> c >> d >> e >> f) {
		p = (c * e - f * b) / (a * e - d * b);
		q = (c - a * p) / b;
		x = round(1000 * p) / 1000;
		y = round(1000 * q) / 1000;
		if (x == 0) x = 0;
		if (y == 0) y = 0; //-0.000??¨??¨???????????????????????¢
		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}