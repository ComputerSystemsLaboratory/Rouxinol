#include <bits/stdc++.h>

using namespace std;

const double EPS = 1e-11;

int main() {
	complex<double> p[4], a, b;
	double x, y;
	int n;
	cin >> n;
	for(int i = 0;i < n;++i) {
		for(int j = 0;j < 4;++j) {
			cin >> x >> y;
			p[j].real(x);
			p[j].imag(y);
		}
		a = p[1] - p[0];
		b = p[3] - p[2];
		double dot = real(conj(a) * b);
		if(signbit(dot)) dot *= -1.;
		cout << (abs(dot - (abs(a) * abs(b))) < EPS ? "YES" : "NO") << endl;
	}
	return 0;
}

