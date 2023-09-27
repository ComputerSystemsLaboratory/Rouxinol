#include <iostream>
#include <cmath>
using namespace std;

double cross_prod(double x0, double y0, double x1, double y1) {
	return x0 * y1 - x1 * y0;
}

int main() {
	double x[4], y[4];
	while(cin >> x[0] >> y[0]) {
		for(int i = 1; i < 4; i++)
			cin >> x[i] >> y[i];
		double a, b;
		a = b = 0;
		for(int i = 0; i < 3; i++) {
			double tmp;
			tmp = cross_prod(x[i]-x[3], y[i]-y[3], x[(i+1)%3]-x[3], y[(i+1)%3]-y[3]);
			a += tmp;
			b += abs(tmp);
		}
		a = abs(a);
		if(abs(a-b) < 1e-7)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}