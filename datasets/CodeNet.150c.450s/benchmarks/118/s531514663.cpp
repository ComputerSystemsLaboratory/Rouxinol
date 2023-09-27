#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int calc(int y, int m, int d) {
	int dy = y - 1, dm = m - 1;
	int sum = 0;
	sum += (dy - dy / 3) * (39 * 5) + (dy / 3) * (10 * 20);
	sum += (y % 3) ? (dm / 2 * 39 + (dm % 2) * 20) : (dm * 20);
	sum += d - 1;
	return sum;
}

int main() {
	int n;
	while (cin >> n && n) {
		rep(i, n) {
			int y, m, d; cin >> y >> m >> d;
			cout << calc(1000, 1, 1) - calc(y, m, d) << endl;
		}
	}
}