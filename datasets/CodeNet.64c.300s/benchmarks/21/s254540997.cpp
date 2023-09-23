#include "bits/stdc++.h"
using namespace std;

#define set fixed << setprecision(3)

int main() {
	double a, b, c, d, e, f;
	while (cin >> a >> b >> c >> d >> e >> f) {
		double x = (c * e - b * f) / (a * e - b * d);
		double y = (a * f - c * d) / (a * e - b * d);
		if (abs(x) < 1e-03) x = 0;
		if (abs(y) < 1e-03) y = 0;
		cout << set << x << " " << y << endl;
	}
	return 0;
}
