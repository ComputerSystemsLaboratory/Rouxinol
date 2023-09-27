#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c, d, e, f;
	while (scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f) != EOF)
	{
		float x = ((c * e) - (b * f)) / ((a * e) - (b * d));
		float y = ((a * f) - (c * d)) / ((a * e) - (b * d));
		if (x <= 0.0000 &&x > -0.0005)x = 0.000;
		if (y <= 0.0000 &&y > -0.0005)y = 0.000;
		printf("%.3f %.3f\n", x, y);
	}
}