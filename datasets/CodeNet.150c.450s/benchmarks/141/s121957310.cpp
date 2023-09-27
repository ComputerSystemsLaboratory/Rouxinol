#include<iostream>
#include<cstdio>
#include<complex>
using namespace std;
typedef complex<double> xy_t;
double cross_product(xy_t a, xy_t b) { return (conj(a)*b).imag(); };
int main() {
	xy_t z[8], p;
	double set[8], s1, s2, s3;
	while (
		scanf("%lf%lf%lf%lf%lf%lf%lf%lf", set, set + 1, set + 2, set + 3, set + 4, set + 5, 

set + 6, set + 7)
		== 8) {
		for (int i = 0; i < 3; i++) {
			z[i] = xy_t(set[i*2], set[i*2 + 1]);
		}
		p = xy_t(set[6], set[7]);
		for (int i = 0; i < 3; i++)
			z[i] -= p;
		s1 = cross_product(z[0], z[1]);
		s2 = cross_product(z[1], z[2]);
		s3 = cross_product(z[2], z[0]);
		if ((s1 > 0 && s2 > 0 && s3 > 0) || (s1 < 0 && s2 < 0 && s3 < 0))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}