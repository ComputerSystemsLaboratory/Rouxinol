#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double a, b, c, d, e, f;

	while (cin >> a >> b >> c >> d >> e >> f) {
		double x = int(1000 * (e*c - b*f) / (a*e - b*d)) / 1000.0;
		double y = int(1000 * (c*d - a*f) / (b*d - a*e)) / 1000.0;

		cout << fixed;

		cout << setprecision(3) << x << " " 
		     << setprecision(3) << y << endl;
	}
	return 0;
}