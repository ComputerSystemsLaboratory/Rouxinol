#include <stdio.h>

int main(void)
{
	double a, b, c, d, e, f;
	double x, y;
	
	while (scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF){
		
		x = (e * c + (-b) * f) / (a * e - d * b);
		y = ((-d) * c + a * f) / (a * e - d * b);
		if (x == 0) x = 0.000;
		else if (y == 0) y = 0.000;
		
		printf("%.3f %.3f\n", x , y);
	}
	
	return (0);
}