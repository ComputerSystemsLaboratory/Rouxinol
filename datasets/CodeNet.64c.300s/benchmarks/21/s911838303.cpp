#include <stdio.h>

int main(void){
	double a, b, c, d, e, f;
	double alpha, beta;
	double x, y;
	double ratio;

	while(1){
		if(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != 6){
			break;
		}

		ratio = 1 /(a*e - b*d);
		x = ratio * (e * c + -1 * b * f);
		y = ratio * (-1 * d * c + a * f);

		if(x == 0){
			x = 0;
		}
		if(y == 0){
			y = 0;
		}

		printf("%.3f %.3f\n", x, y);
	}

	return 0;
}