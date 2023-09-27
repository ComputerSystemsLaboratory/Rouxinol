// class point	の練習（クラスの高度な実装）
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cmath>
#include <vector>
#include <queue>


typedef long long llong;
using namespace std;

#define SMALL_LIMIT 1e-12

int main() {
	int n;
	double x1, x2, x3, x4;
	double y1, y2, y3, y4;
	double xa, ya, xb, yb;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		xa = x2 - x1; ya = y2 - y1;
		xb = x4 - x3; yb = y4 - y3;
		if (abs(xa*yb - ya * xb) < SMALL_LIMIT)cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
 
