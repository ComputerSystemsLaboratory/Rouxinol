#include "bits/stdc++.h"
#define int long long
#define range(i, a, b) for(auto i = a; i < b; i++)
#define rep(i, a) range(i, 0, a)
#define all(a) (a).begin(),(a).end()
using namespace std;
const int INF = sizeof(int) == sizeof(long long) ? 1000000000000000000LL : 1000000000;
const int MOD = 1000000007;
const long double EPS = 1e-8;
using vi = vector <int>;
using vvi = vector <vi>;

signed main() {
	int n;
	while (cin >> n, n) {
		vi a(n + 1, 0);
		rep (i, n) cin >> a[i + 1];
		rep (i, n) a[i + 1] += a[i];
		int ans = -INF;
		rep (i, n) {
			range (j, i, n) {
				ans = max(ans, a[j + 1] - a[i]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
