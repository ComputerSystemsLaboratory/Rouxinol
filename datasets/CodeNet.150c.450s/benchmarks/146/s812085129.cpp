#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio( false );

	int n;
	cin >> n;

	for( int i = 0; i < n; ++i ) {
		double x[4], y[4];
		cin >> x[0] >> y[0];
		cin >> x[1] >> y[1];
		cin >> x[2] >> y[2];
		cin >> x[3] >> y[3];

		double vx0 = x[1] - x[0];
		double vy0 = y[1] - y[0];
		double vx1 = x[3] - x[2];
		double vy1 = y[3] - y[2];

		double result = vx0 * vy1 - vy0 * vx1;
		if( abs( result ) < 1e-10 ) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}

