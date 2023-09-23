#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a, b, c, d, e, f;
	cout << setprecision(3) << fixed;
	while (cin >> a >> b >> c >> d >> e >> f) {
		double denom = a * e - b * d;
		double x = (c * e - b * f) / denom;
		x = (x == -0) ? 0 : x;
		double y = (a * f - c * d) / denom;
		y = (y == -0) ? 0 : y;

		cout << x << ' ' << y << endl;
	}
	return 0;
}