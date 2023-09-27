
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#define pi 3.14159265358979323846264338
using namespace std;

int main() {
	int a, b, c, d, e, f;
	double by, ey, x, y, cc, ff;
	while (cin >> a >> b >> c >> d >> e >> f) {
		by = b*d;
		cc = c*d;
		ey = e*a;
		ff = f*a;
		y = (ff - cc) / (ey - by);
		x = (c - b*y) / a;
		int xx = x * 10000, yy = y * 10000;
		if (xx % 10 >= 5) {
			x += 0.001;
		}
		if (yy % 10 >= 5) {
			y += 0.001;
		}
		cout << fixed << setprecision(3) << x << " " << y << endl;
	}
	return 0;
}