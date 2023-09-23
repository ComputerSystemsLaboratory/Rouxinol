#include <algorithm>
#include <string.h>
#include <stdio.h>

int main()
{
	const double EPS = 1.0e-10;
	double a,b,c,d,e,f;
	double x,y;
	while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF){
		x = (e * c - b * f) / (a * e - b * d);
		y = (a * f - d * c) / (a * e - b * d);
		if(-0.0005 < x && x < 0.0+EPS) x = 0.0;
        if(-0.0005 < y && y < 0.0+EPS) y = 0.0;
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}