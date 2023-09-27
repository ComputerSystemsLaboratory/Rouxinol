//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0004
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

double zc(double n) {
	if (-0.000000001<n&&n <= 0) return 0;
	else return n;
}

int main() {
	double a, b, c, d, e, f;
	while (cin >> a >> b >> c >> d >> e >> f) {
		double x = 1 / (a*e - b*d)*(c*e - b*f);
		double y = 1 / (a*e - b*d)*(a*f - c*d);
		printf("%.3f %.3f\n", zc(x), zc(y));
	}

}