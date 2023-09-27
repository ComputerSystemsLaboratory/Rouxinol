#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	double x1, x2, x3, y1, y2, y3, xp, yp, v1, v2, v3;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
		v1 = (x2 - x1)*(yp - y1) - (y2 - y1)*(xp - x1);
		v2 = (x3 - x2)*(yp - y2) - (y3 - y2)*(xp - x2);
		v3 = (x1 - x3)*(yp - y3) - (y1 - y3)*(xp - x3);
		if ((v1 > 0 && v2 > 0 && v3 > 0) || (v1 < 0 && v2 < 0 && v3 < 0))cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}