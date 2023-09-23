#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	for (double a, b, c, d, e, f, x, y; cin >> a >> b >> c >> d >> e >> f; cout << fixed << setprecision(3) << x << ' '  << y << endl) {
		int tmp;
		x = ((c*e - b*f) ? (c*e - b*f) / (a*e - b*d) : 0.0000);
		if (x < 0) {
			x -= 0.0005;
		}
		else if (x>0) {
			x += 0.0005;
		}
		x = int(x * 1000) / 1000.0;
		y = ((a*f - c*d) ? (a*f - c*d) / (a*e - b*d) : 0.0000);
		if (y > 0) {
			y += 0.0005;
		}
		else if (y < 0) {
			y -= 0.0005;
		}
		y = int(y * 1000) / 1000.0;
	}
	return 0;
}