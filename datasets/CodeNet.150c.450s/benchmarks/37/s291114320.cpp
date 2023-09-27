#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	double a, b, c, d, e, f;
	double x, y;
	while (cin >> a >> b >> c >> d >> e >> f) {
		x = (c * e - b * f) / (a * e - b * d);
		y = (c - a * x) / b;
		printf("%.3lf %.3lf\n", (x == -0)?0:x, (y == -0)?0:y);
	}
	return 0;
}