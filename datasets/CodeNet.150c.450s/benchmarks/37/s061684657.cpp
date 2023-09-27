#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
	double a, b, c, d, e, f, x, y;
	while(cin >> a >> b >> c >> d >> e >> f){
		x = (c*e-b*f)/(a*e-b*d);
		y = (c*d-a*f)/(b*d-a*e);
		if (fabs(x) < 1e-3) x = 0;
		if (fabs(y) < 1e-3) y = 0;
		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}
