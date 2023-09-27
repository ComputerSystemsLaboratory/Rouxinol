#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double a, b, c, d, e, f, x, y;
	while (cin >> a >> b >> c >> d >> e >> f) {
		// (1) a x + b y = c  && (2) dx +  ey =  f
		// (3) adx + bdy = cd && (4) adx + aey = af
		// (3) - (4) (bd - ae) * y = cd - af
		// (5) y = (cd - af) / (bd - ae)
		// (1) x = (c - by) / a
		y = (c * d - a * f) / (b * d - a * e);
		x = (c - b * y) / a;
		// 1.234ab * 1000
		// 1234.ab + 0.5
		// (int)(1234.cd / 1000)
		// 1.234c
		x *= pow(10, 3);
		y *= pow(10, 3);
		if (x < 0) {
			x -= 0.5;
		}
		else if (x > 0) {
			x += 0.5;
		}
		else {
			x;
		}
		if (y < 0) {
			y -= 0.5;
		}
		else if (y > 0) {
			y += 0.5;
		}
		else {
			y;
		}
		x = (int)x;
		y = (int)y;
		x /= pow(10, 3);
		y /= pow(10, 3);
		cout << fixed << setprecision(3) << x << flush;
		cout << " " << flush;
		cout << fixed << setprecision(3) << y << flush;
		cout << endl;
	}
	return 0;
}