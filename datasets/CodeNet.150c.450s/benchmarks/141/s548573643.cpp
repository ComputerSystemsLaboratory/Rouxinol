#include <iostream>
#include <cstdio>
#include <complex>
#include <cmath>

using namespace std;
const double eps = 1e-11;

typedef complex<double> xy_t;

double dotProduct(xy_t a, xy_t b){
	return (conj(a) * b).real();
}

double crossProduct(xy_t a, xy_t b){
	return (conj(a) * b).imag();
}

xy_t projection(xy_t p, xy_t b){
	return b*dotProduct(p,b)/norm(b);
}

bool cmpSign(double a, double b){
	if((a > 0 && b < 0) || (a < 0 && b > 0)) return false;
	return true;
}

int main (){
	int N;
	double X[4],Y[4];
	while(true){
		for(int i = 0; i < 4; i++) cin >> X[i] >> Y[i];
		if (!cin) break;
		xy_t a[4];
		for(int i = 0; i < 4; i++) a[i] = xy_t(X[i],Y[i]);
		double p = crossProduct(a[0]-a[3],a[1]-a[3]);
		double q = crossProduct(a[1]-a[3],a[2]-a[3]);
		double r = crossProduct(a[2]-a[3],a[0]-a[3]);
		bool ok = cmpSign(p,q) && cmpSign(q,r) && cmpSign(r,p);
		cout << (ok ? "YES" : "NO") << endl;
	}
	return 0;
}