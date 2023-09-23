/*
 * AOJ 4
 * Simultaneous Equation (PCK 2003)
 *
 */
#include <iostream>
#include <cstdio>

using namespace std;

int main () {
	double a, b, c,
		d, e, f;
	while(cin >> a >> b >> c >> d >> e >> f) {
	double y = (c*d-f*a) / (b*d-e*a);
	double x = (c - b*y) / a;
	printf("%.3lf %.3lf\n", x, y);
	}
	return 0;
}