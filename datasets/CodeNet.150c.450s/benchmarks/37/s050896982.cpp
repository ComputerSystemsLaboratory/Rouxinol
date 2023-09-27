#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double d_round(double frac, int digit) {
	double copy = frac * pow(10, digit - 1);
	copy = copy - (int)copy;
	return frac + (int)(copy + (copy > 0.5 ? 0.5 : 0));;
}

int main() {
	double a, b, c, d, e, f, x, y;
	cout << fixed << setprecision(3);
	while (cin >> a >> b >> c >> d >> e >> f) {
		x = (c * e - b * f) / (a * e - b * d);
		y = (c - a * x) / b;
		x = d_round(x, 4); y = d_round(y, 4);
		cout << x << " " << y << endl;
	}
	return 0;
}
