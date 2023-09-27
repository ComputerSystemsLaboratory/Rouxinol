#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	double a, b, c, d, e, f;

	vector<string> v;
	while (cin >> a >> b >> c >> d >> e >> f) {
		double x, y;

		x = ((c * e) - (b * f)) / ((a * e) - (b * d));
		y = ((c * d) - (a * f)) / ((b * d) - (a * e));

		if (x == 0) {
			x = 0;
		}
		else if (y == 0) {
			y = 0;
		}

		x = x * 1000;
		x = round(x);
		x = x / 1000;

		y = y * 1000;
		y = round(y);
		y = y / 1000;

		stringstream ss;
		ss << fixed << setprecision(3) << x << " " << y;
		v.push_back(ss.str());
	}
	
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	return 0;
}