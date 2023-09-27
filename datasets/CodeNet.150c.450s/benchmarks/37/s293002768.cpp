#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	int a, b, c, d, e, f;
	float x, y;
	while(cin >> a >> b >> c >> d >> e >> f) {
		y = (d * c * 1.0 - f * a * 1.0) / (d * b * 1.0 - a * e * 1.0);
		x = (c * 1.0 - b * y * 1.0) / a * 1.0;
		printf("%.3lf %.3lf\n", x, y);
	}

	return 0;
}