#include <iostream>
#include <cstdio>

using namespace std;

void solve(int a, int b, int c, int d, int e, int f) {
	double x = (f - (double)e*c/b) / (d - (double)e*a/b);
	double y = (c - a*x) / b;
	if (x == 0) x = 0.000;
	if (y == 0) y = 0.000;
	printf("%4.3f %4.3f\n", x, y);
}

int main() {
	int a, b, c, d, e, f;
	while (cin >> a >> b >> c >> d >> e >> f) {
		solve(a,b,c,d,e,f);
	}
	return 0;
}