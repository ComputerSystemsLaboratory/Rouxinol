#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b, c, d, e, f, x, y;
	while (cin >> a >> b >> c >> d >> e >> f) {
		x = (double)(c*e - b*f) / (a*e - b*d);
		y = (double)(a*f - c*d) / (a*e - b*d);
		if (-0.001<x && 0.001>x) {
			x = 0;
		}if (-0.001<y && 0.001>y) {
				y = 0;
			}
		printf("%.3lf %.3lf\n", x, y);
	}
	return 0;
}