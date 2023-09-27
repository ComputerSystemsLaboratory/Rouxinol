#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 1e9 + 7, MOD = 1e9 + 7;
const long long LINF = 1e18;
const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
signed main() {
	double a1, b1, c1, a2, b2, c2, A, B, C, X, Y;
	while (cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2) {
		A = a1, B = b1, C = c1;
		if (a1 != a2) {
			double tmp = a2 / a1;
			a1 *= tmp, b1 *= tmp, c1 *= tmp;
		}
		Y = (c2 - c1) / (b2 - b1);
		X = (C - B * Y) / A;
		printf("%.3f %.3f\n", X, Y);
	}
	return 0;
}
