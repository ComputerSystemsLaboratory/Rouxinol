#include<iostream>
using namespace std;
long double x[4], y[4], xp[2], yp[2]; int n;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];
		xp[0] = x[0] - x[1];
		yp[0] = y[0] - y[1];
		xp[1] = x[2] - x[3];
		yp[1] = y[2] - y[3];
		if (yp[0] == 0 && yp[1] == 0) { goto E; }
		if (yp[0] == 0 && yp[1] != 0) { goto F; }
		if (yp[0] != 0 && yp[1] == 0) { goto F; }
		if ((xp[0] / yp[0]) == (xp[1] / yp[1])) { goto E; }
		goto F;
	E:; cout << "YES" << endl;
		goto G;
	F:; cout << "NO" << endl;
	G:;
	}
}