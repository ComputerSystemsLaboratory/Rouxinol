#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

int main() {
	typedef complex<double> com;
	const double eps = 1e-11;
	int n;
	double x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> n;
	for ( int i = 0; i < n; i++ ) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		if ( abs( ( conj( com( x2 - x1, y2 - y1 ) ) * com( x4 - x3, y4 - y3 ) ).imag() ) < eps )
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}