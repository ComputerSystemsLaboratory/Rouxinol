#include <iostream>
#include <cmath>
using namespace std;
const long double EPS = 1e-12;
int main() {
	double x1, y1, x2, y2, x3, y3, x4, y4;
	int n;
	double veku1[2];
	double veku2[2];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		veku1[0] = x2 - x1;
		veku1[1] = y2 - y1;
		veku2[0] = x4 - x3;
		veku2[1] = y4 - y3;
		if (fabs(veku1[0]*veku2[1]-veku1[1]*veku2[0]) <= EPS) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}