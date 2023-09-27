
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <ctime>
#include <string>
#include <map>
#include <stack>
#include <queue>
#include <complex>

using namespace std;
typedef complex<double> xy_t;
double x[4], y[4];

double cross_product(xy_t a, xy_t b) { return (conj(a)*b).imag(); }

bool three(double s, double t, double u){
	if(s * t > 0 && s * u > 0) return true;
	else return false;
}


int main(void){
	while(true){
		for (int i = 0; i < 4; ++i){
			cin >> x[i] >> y[i];
		}
		if(!cin) break;

		xy_t a(x[0], y[0]), b(x[1], y[1]), c(x[2], y[2]), p(x[3], y[3]);

		double apb, bpc, cpa;
		apb = cross_product(a - p, b - p);
		bpc = cross_product(b - p, c - p);
		cpa = cross_product(c - p, a - p);

		bool ok = three(apb, bpc, cpa);
		cout << (ok ? "YES" : "NO") << endl;
		
	}
	
    return 0;
}