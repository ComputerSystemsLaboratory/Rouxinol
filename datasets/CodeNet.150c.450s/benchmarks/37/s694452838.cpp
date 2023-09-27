#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	double a, b, c, d, e, f;
	while (cin >> a >> b >> c >> d >> e >> f) {
		double ansX = (e*c - b*f) / (a*e - b*d);
		double ansY = (a*f - d*c) / (a*e - b*d);
		if (ansX < 0.0005&&-0.0005 < ansX)ansX = 0;
		if (ansY < 0.0005&&-0.0005 < ansY)ansY = 0;
		printf("%.3f %.3f\n", ansX, ansY);
	}

	return 0;
}