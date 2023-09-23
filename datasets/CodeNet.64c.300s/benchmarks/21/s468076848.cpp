#include <iostream>
#include<stdio.h>
int main(){
	long double a, b, c, d, e, f,x,y;
	while (std::cin >> a >> b >> c >> d >> e >> f) {
		x = (b*f - e * c) / (d*b - a * e);
		y = (a*f - d * c) / (a*e - d * b);
		if (x < 0)
			x = (double)((int)(1000 * x - 0.5)) / 1000;
		else
			x = (double)((int)(1000 * x + 0.5)) / 1000;
		if (y < 0)
			y = (double)((int)(1000 * y - 0.5)) / 1000;
		else
			y = (double)((int)(1000 * y + 0.5)) / 1000;
		printf("%.3llf %.3llf\n", x, y);
	}
	return 0;
}
