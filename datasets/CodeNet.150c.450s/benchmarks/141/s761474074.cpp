#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	double x1, x2, x3, y1, y2, y3, xp, yp;
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
		double xa = x2 - x1;
		double ya = y2 - y1;
		double xb = x3 - x1;
		double yb = y3 - y1;
		double x = xp - x1;
		double y = yp - y1;
		double div = xa * yb - xb * ya;
		double a = (yb * x - xb * y) / div;
		double b = (-ya * x + xa * y) / div;
		if (a >= 0 && b >= 0 && a + b <= 1) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}