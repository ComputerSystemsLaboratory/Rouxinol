#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	int a, b, c, d, e, f;

	while (cin >> a >> b >> c >> d >> e >> f) {
		double x, y;
		x = (double)(b*f - c*e) / (b*d - a*e);
		y = (double)(c - a*x) / b;
		if (fabs(x) < 1e-6) x = 0;
		if (fabs(y) < 1e-6) y = 0;
		cout << fixed << setprecision(3) << x << " " << y << endl;
	}
	return 0;
}