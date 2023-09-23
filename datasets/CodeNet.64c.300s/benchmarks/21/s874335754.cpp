#include <bits/stdc++.h>
using namespace std;

using db = double;
const db eps = 1e-6;

int main() {
	cout << fixed << setprecision(3);
	ios :: sync_with_stdio(false);
	db a, b, c, d, e, f;
	while(cin >> a >> b >> c >> d >> e >> f) {
		db x = (c * e - b * f) / (a * e - b * d);
		db y = (a * f - c * d) / (a * e - b * d);
		if(x > -eps && x < eps) x = 0;
		if(y > -eps && y < eps) y = 0;
		cout << x << ' ' << y << '\n';
	}
	return 0;
}