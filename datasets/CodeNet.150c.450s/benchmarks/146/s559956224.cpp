#include<iostream>
const double eps = 1e-11;
using namespace std;

int main() {
	double x[8], y[8], z;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < 4; k++) {
			cin >> x[k] >> y[k];
		}
		x[0] -= x[1];
		y[0] -= y[1];
		x[2] -= x[3];
		y[2] -= y[3];
		z = x[0] * y[2] - x[2] * y[0];
		if (-eps < z &&z < eps) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}