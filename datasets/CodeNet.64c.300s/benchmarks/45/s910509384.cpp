#include <bits/stdc++.h>
#define range(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, a) range(i, 0, a)
using namespace std;

int main() {
	int n, m, p;
	while (cin >> n >> m >> p, n) {
		int x[n], sum = 0;
		rep (i, n) {
			cin >> x[i];
			sum += x[i];
		}
		if (!x[m - 1]) {
			cout << 0 << endl;
			continue;
		}
		cout << (int) (sum * 100.0 * (100 - p) / 100.0 / x[m - 1]) << endl;
	}
	return 0;
}
