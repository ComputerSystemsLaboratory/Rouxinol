#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float a, b, c, d, e, f, x, y;

	while (cin >> a >> b >> c >> d >> e >> f) {
		if (a == 0) {
			x = 0;
			y = c / b;
		}else if (b == 0) {
			x = c / a;
			y = 0;
		}else {
			x = (c * e - b * f) / (a * e - b * d);
			if (0 == x) { x = 0; }
			y = (c - a * x) / b;
		}
		cout << fixed << setprecision(3) << x << ' ' << y << endl;
	}
    return 0;
}