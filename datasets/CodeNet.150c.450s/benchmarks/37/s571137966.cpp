#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>

int main(){
	double a, b, c, d, e, f, x, y, det;
	while (scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f) != EOF){
		det = b * d - a * e;
		y = (c * d - a * f) / det;
		x = (c - b * y) / a;
		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}