#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

int main() {
	typedef complex<double> com;
	double x1, y1, x2, y2, x3, y3, xp, yp, s1, s2, s3;
	while ( cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp ) {
		s1 = ( conj( com( x1 - xp, y1 - yp ) ) * com( x2 - xp, y2 - yp ) ).imag();
		s2 = ( conj( com( x2 - xp, y2 - yp ) ) * com( x3 - xp, y3 - yp ) ).imag();
		s3 = ( conj( com( x3 - xp, y3 - yp ) ) * com( x1 - xp, y1 - yp ) ).imag();
		if ( s1 * s2 > 0 && s2 * s3 > 0 && s3 * s1 > 0 )
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}