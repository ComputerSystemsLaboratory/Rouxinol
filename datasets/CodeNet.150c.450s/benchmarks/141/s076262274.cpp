#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for(int i=0;i<(n);i++)
typedef complex<double> xy_t;
double cross_product(xy_t a, xy_t b) { return (conj(a) * b).imag(); }
double eps=1e-10;
double x[4], y[4];

int main() {
	while (true) {
		rep(i, 4) cin >> x[i] >> y[i];
		if (!cin) break;
		xy_t a(x[0], y[0]), b(x[1], y[1]), c(x[2], y[2]), p(x[3], y[3]);
		double pab = cross_product(a - p, b - p);
		double pbc = cross_product(b - p, c - p);
		double pca = cross_product(c - p, a - p);
		bool ok = ((pab + eps) > 0 && (pbc + eps) > 0 && (pca + eps) > 0) || ((pab - eps) < 0 && (pbc - eps) < 0 && (pca - eps) < 0);
		cout << (ok ? "YES" : "NO")<<endl;
	}
	return 0;	
}
