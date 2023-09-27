#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
	double x, y, a, b, c, d, e, f;
	while (cin >> a >> b >> c >> d >> e >> f) {
		y = (c*d - a*f) / (b*d - a*e);
		x = (c - b*y) / a;
		cout << fixed << setprecision(3) << x << ' ' << y << '\n';
	}
}