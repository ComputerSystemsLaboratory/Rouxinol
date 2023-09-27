#include <stdio.h>

int main()
{
	double a, b, c, d, e, f;
	while (scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF)
	{
		double y = (a*f - c*d) / (a*e - b*d);
		double x = (c - b*y) / a;

		printf("%.3lf %.3lf\n", x, y);
	}
	return 0;
}