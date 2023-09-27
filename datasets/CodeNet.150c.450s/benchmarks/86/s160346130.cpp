#include <bits/stdc++.h>
#define range(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, a) range(i, 0, a)
using namespace std;
const int INF = sizeof(int) == sizeof(long long) ? 1e18 : 1e9;
const int MOD = 1000000007;
const long double EPS = 1e-8;

int main() {
	int n, m, p, va = 0;
	while (cin >> n >> m >> p, n) {
		int x[n], sum = 0;
		rep (i, n) {
			cin >> x[i];
			sum += x[i];
		}
		if (x[m - 1] == 0) {
			cout << 0 << endl;
		} else {
			long long ans = sum * 100.0L * (1.0L - (p / 100.0L)) / x[m - 1] + EPS;
			cout << ans << endl;
		}
	}
	return 0;
}
