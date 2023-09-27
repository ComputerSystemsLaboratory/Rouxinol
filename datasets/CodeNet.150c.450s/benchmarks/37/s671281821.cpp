#include <bits/stdc++.h>

using namespace std;

int main() {
	double a, b, c, d, e, f;
	while (cin >> a >> b >> c >> d >> e >> f) {
		double x = (c * e - b * f) / (a * e - b * d);
		double y = (c * d - a * f) / (b * d - a * e);
		if (-0.0005 <= x && x < 0.0005) x = 0;
		if (-0.0005 <= y && y < 0.0005) y = 0;
		cout << fixed << setprecision(3) << x << " " << y << endl;
	}
}