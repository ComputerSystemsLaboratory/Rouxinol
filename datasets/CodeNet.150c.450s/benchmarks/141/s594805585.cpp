#include <iostream>
#include <complex>
#include <cmath>
using namespace std;
typedef complex<double> xy_t;
double cross_product(xy_t a, xy_t b){ return (conj(a)*b).imag();}
double x[4],y[4];
int main() {
	while(true){
		for(int i=0; i<4;++i) cin >> x[i] >> y[i];
		if(!cin) break;
		xy_t a(x[0],y[0]),b(x[1],y[1]),c(x[2],y[2]),p(x[3],y[3]);
		bool ok = cross_product(a-p,b-p)*cross_product(b-p,c-p)>0
				  && cross_product(b-p,c-p)*cross_product(c-p,a-p)>0;
		cout << (ok ? "YES" : "NO") << endl;
	}
	return 0;
}