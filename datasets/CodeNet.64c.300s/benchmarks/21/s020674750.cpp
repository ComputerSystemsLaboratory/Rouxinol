#include <iostream>
#include <iomanip>

int main(void) {
	using namespace std;
	double a, b, c, d, e, f;
	double x, y;
	while (std::cin >> a >> b >> c >> d >> e >> f) {
		y = (double)(f*a - d*c) / (e*a - d*b);
		x = (c - b*y) / a;
		cout << showpoint << fixed << setprecision(3)<< x << ' ' << y << endl;
	}

	return 0;
}