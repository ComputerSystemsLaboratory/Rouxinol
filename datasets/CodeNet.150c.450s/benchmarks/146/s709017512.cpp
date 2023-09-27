#include <iostream>

using namespace std;

const double EPS = 1e-10;

bool ok(double val) {
	return (val >= 0.0 ? val : -val) < EPS;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		double x[4], y[4];
		for (int j = 0; j < 4; j++)
			cin >> x[j] >> y[j];
		double xx1 = x[0]-x[1], xx2 = x[2]-x[3];
		double yy1 = y[0]-y[1], yy2 = y[2]-y[3];
		if (ok(xx1*yy2 - xx2*yy1))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}