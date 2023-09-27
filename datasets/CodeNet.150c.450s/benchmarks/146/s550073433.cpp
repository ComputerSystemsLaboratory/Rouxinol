#include <bits/stdc++.h>

using namespace std;

typedef long double ld;
typedef complex<ld> P;

const ld eps = 1e-12;

P input() {
	ld x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
	return P(x1-x2, y1-y2);
}
ld dot(P p1, P p2) {
	return p1.real()*p2.real() + p1.imag()*p2.imag();
}
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		P p1 = input();
		P p2 = input();
		ld d = dot( p1 * P(0, 1), p2 );
		if ( abs(d) < eps ) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}