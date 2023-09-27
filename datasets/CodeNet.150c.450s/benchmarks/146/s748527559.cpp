#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

typedef complex<double> xy_t;

double cross_product(xy_t a, xy_t b) {
	return (conj(a) * b).imag();
}

const double eps = 1e-11;

int main() {
	int n;
	double x[4];
	double y[4];
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> x[j] >> y[j];
		}
		bool result = abs(cross_product(xy_t(x[0], y[0]) - xy_t(x[1], y[1]), 
						xy_t(x[2], y[2]) - xy_t(x[3], y[3]))) < eps;
		cout << (result ? "YES" : "NO") << endl;
	}
}