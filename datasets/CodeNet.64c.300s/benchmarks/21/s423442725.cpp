#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, e, f;
int main() {
	while(cin >> a >> b >> e >> c >> d >> f) {
		double p = d * e - b * f; p /= a * d - b * c; if(-1e-10 < p && p < 1e-10) p = 0.0;
		double q = a * f - c * e; q /= a * d - b * c; if(-1e-10 < q && q < 1e-10) q = 0.0;
		printf("%.3lf %.3lf\n", p, q);
	}
	return 0;
}