#include <bits/stdc++.h>

#define REP(i, a, b) for (int i = (int)(a); i < (int)(b); ++i)
#define rep(i, n) REP (i, 0, n)
#define mset(a, n) memset(a, n, sizeof(a))

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pair<int, int> > vpii;

const int INF = 1000000000;
const int MOD = 1000000007;
const double EPS = 1e-8;

int main() {
	int n;
	while (cin >> n, n) {
		int a[n], ans = -100000;
		rep(i, n) cin >> a[i];
		int sum[n + 1];
		sum[0] = 0;
		rep(i, n) sum[i + 1] = sum[i] + a[i];
		for (int i = 1; i < n + 1; ++i) {
			for (int j = i; j < n + 1; ++j) {
				// cout << sum[j] - sum[i - 1] << " ";
				ans = max(ans, sum[j] - sum[i - 1]);
			}
			// cout << endl;
		}
		cout << ans << endl;
	}
}