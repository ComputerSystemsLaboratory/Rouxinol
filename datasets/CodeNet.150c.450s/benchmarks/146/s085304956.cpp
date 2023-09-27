#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
	int n;
	double x1, y1, x2, y2, x3, y3, x4, y4;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		//scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);


#if 0
		// 線じゃなくて点の時
		if (x1 == x2 && y1 == y2) {
			cout << "NO" << endl;
		}
		// 線じゃなくて点の時
		if (x3 == x4 && y3 == y4) {
			cout << "NO" << endl;
		}

		// Y軸に平行な時
		if ( x2 - x1 == 0 && x4 - x3 == 0) {
			cout << "YES" << endl;
		}
		// X軸に平行な時
		if ( y2 - y1 == 0 && y4 - y3 == 0) {
			cout << "YES" << endl;
		}
#endif
		if ( abs((y2 - y1) *  (x4 - x3) - (y4 - y3) *  (x2 - x1)) < 0.0000000001 ) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}

