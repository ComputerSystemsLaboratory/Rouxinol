#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
signed main() {
	double x1, x2, x3, x4, y1, y2, y3, y4;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4)cout << ((((x1 - x2) * (y4 - y1) - (y1 - y2) * (x4 - x1)) * ((x1 - x2) * (y3 - y1) - (y1 - y2) * (x3 - x1)) > 0) && (((x2 - x3) * (y4 - y2) - (y2 - y3) * (x4 - x2)) * ((x2 - x3) * (y1 - y2) - (y2 - y3) * (x1 - x2)) > 0) && (((x3 - x1) * (y4 - y3) - (y3 - y1) * (x4 - x3)) * ((x3 - x1) * (y2 - y3) - (y3 - y1) * (x2 - x3)) > 0) ? "YES\n" : "NO\n");
}
