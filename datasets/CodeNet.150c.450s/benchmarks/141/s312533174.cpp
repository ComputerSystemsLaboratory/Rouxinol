#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

typedef complex<double> xy_t;
double cross_p(xy_t a,xy_t b) { return (conj(a) * b).imag(); }
double x[4],y[4];
int main() {
	while(true) {
		for (int i=0; i<4; ++i) cin >> x[i] >> y[i];
		if(! cin) break;
		xy_t a[3] = {
				xy_t(x[1],y[1]) - xy_t(x[0],y[0]),
				xy_t(x[2],y[2]) - xy_t(x[1],y[1]),
				xy_t(x[0],y[0]) - xy_t(x[2],y[2])
			};
		xy_t b[3] = {
				xy_t(x[3],y[3]) - xy_t(x[0],y[0]),
				xy_t(x[3],y[3]) - xy_t(x[1],y[1]),
				xy_t(x[3],y[3]) - xy_t(x[2],y[2])
			};
		bool p = cross_p(a[0],b[0]) * cross_p(a[1],b[1]) >0 &&
			cross_p(a[1],b[1]) * cross_p(a[2],b[2]) >0;
		cout << ( p ? "YES" : "NO" ) << endl;
	}
}