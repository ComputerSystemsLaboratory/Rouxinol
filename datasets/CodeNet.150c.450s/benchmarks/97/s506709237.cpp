#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
typedef pair<int, int>P;

int main() {
	int n;
	while (cin >> n,n) {
		P a[300];
		a[0] = P(0, 0);
		for (int i = 1; i < n; i++) {
			int m, d;
			cin >> m >> d;
			if (d == 0) {
				a[i] = P(a[m].first - 1, a[m].second);
			}
			else if (d == 1) {
				a[i] = P(a[m].first, a[m].second - 1);
			}
			else if (d == 2) {
				a[i] = P(a[m].first + 1, a[m].second);
			}
			else {
				a[i] = P(a[m].first, a[m].second + 1);
			}
		}
		int xm=1e-8, xs=1e8, ym=1e-8, ys=18;

		for (int i = 0; i < n; i++) {
			xm = max(a[i].first, xm);
			xs = min(xs, a[i].first);
			ym = max(a[i].second, ym);
			ys = min(a[i].second, ys);
		}
		cout << xm - xs + 1 << ' ' << ym - ys + 1 << endl;
	}
	return 0;
}