#define scanf_s scanf
#include <stdio.h>
#include <iostream>
using namespace std;
#define MAX 200
int main(void)
{
	double a, b, c, d, e, f, x, y;
	while (scanf_s("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF) {
		x = 0; y = 0;
		if ((e * c - b * f) != 0 && (e * a - b * d) != 0)
			x = (e * c - b * f) / (e * a - b * d);
		if((d * c - a * f) != 0 &&  (d * b - a * e) != 0)
			y = (d * c - a * f) / (d * b - a * e);
		printf("%.3f %.3f\n", x, y);
	}
}