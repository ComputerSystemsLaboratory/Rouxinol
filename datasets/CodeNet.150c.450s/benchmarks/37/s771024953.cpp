#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char** argv) {
	const double EPS = 1.0e-10;
	double a, b, c, d, e, f; // -1000 <= a, b, c, d, e, f <= 1000
	while (cin >> a >> b >> c >> d >> e >> f) {
		double x = (c*e - b*f) / (a*e - b*d);
		double y = (a*f - c*d) / (a*e - b*d);
		if (-0.0005 < x && x < 0.0 + EPS) x = 0.0;
		if (-0.0005 < y && y < 0.0 + EPS) y = 0.0;
		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}