#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int main() {
	double a, b, c, d, e, f, x, y;
	while(cin >>a >>b >>c >>d >>e >>f){
		x = (b*f - c*e) / (b*d - a*e);
		y = (c - (a*x)) / b;
		printf("%.3f %.3f\n", x+0.0, y+0.0);
	}
	return 0;
}