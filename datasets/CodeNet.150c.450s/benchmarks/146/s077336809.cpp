#include <bits/stdc++.h>
using namespace std;
using ld = long double;
const ld eps = 1e-11;

int main()
{
	int n;
	ld x1, x2, x3, x4, y1, y2, y3, y4;
	cin >> n;
	while (n--) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		ld dx1 = x2 - x1, dy1 = y2 - y1;
		ld dx2 = x4 - x3, dy2 = y4 - y3;
		if (abs(dx1 * dy2 - dy1 * dx2) < eps) {
			puts("YES");
		}
		else {
			puts("NO");
		}
	}
	return 0;
}