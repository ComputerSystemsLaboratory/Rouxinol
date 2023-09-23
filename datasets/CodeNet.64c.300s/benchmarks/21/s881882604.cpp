#include<stdio.h>
#include<cmath>

int main(void) {
	int a, b, c, d, e, f;
	double x, y;
	while (scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f) != EOF) {
		x = (double)(c*e - b*f) / (a*e - b*d);
		y = (double)(c*d - a*f) / (b*d - a*e);
		if (fabs(x) < 1e-3) x = 0;
		if (fabs(y) < 1e-3) y = 0;

		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}