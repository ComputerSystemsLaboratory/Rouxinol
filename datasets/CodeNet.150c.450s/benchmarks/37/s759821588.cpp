#include <stdio.h>
#pragma warning(disable : 4996)
long double a, b, c, d, e, f, x, y;
int main() {
	while (~scanf("%Lf%Lf%Lf%Lf%Lf%Lf", &a, &b, &c, &d, &e, &f)) {
		x = (c * e - b * f) / (a * e - b * d);
		y = (a * f - c * d) / (a * e - b * d);
		if (-0.0005 < x && x < 0.0005) x = 0.0;
		if (-0.0005 < y && y < 0.0005) y = 0.0;
		printf("%.3Lf %.3Lf\n", x, y);
	}
	return 0;
}