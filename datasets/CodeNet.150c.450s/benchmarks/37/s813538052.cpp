#include <cstdio>
#include <cmath>

int main(void)
{
	double a, b, c, d, e, f;

	while (scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF){
		double y = (d * c - a * f) / (d * b - a * e);
		double x = (c * e - b * f) / (a * e - b * d);
		if (fabs(x) < 1e-4) x = 0.0;
		if (fabs(y) < 1e-4) y = 0.0;
		printf("%.3f %.3f\n", x, y);
	}

	return 0;
}