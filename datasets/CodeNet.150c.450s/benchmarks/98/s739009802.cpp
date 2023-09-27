#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define REP(i, a, b) for (int i = (int)a; i < (int)b; ++i)
#define rer(i, a, b) for (int i = (int)a; i <= (int)b; ++i)
#define each(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define all(v) v.begin(), v.end()
#define mset(a, n) memset(a, n, sizeof(a))

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef vector<pair<int, int> > vpii;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

const int inf = 1000000000;
const int mod = 1000000007;
const double EPS = 1e-9;
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

int n, m;

int main() {
	// cin.tie(0); // tie
	// ios::sync_with_stdio(false); // sync
	while (cin >> n >> m, n || m) {
		int t[n + 1], h[m + 1];
		int sum1 = 0, sum2 = 0;
		REP(i, 1, n + 1) {
			cin >> t[i];
			sum1 += t[i];
		}
		REP(i, 1, m + 1) {
			cin >> h[i];
			sum2 += h[i];
		}
		int ans1 = 100, ans2 = 100;
		REP(i, 1, n + 1) REP(j, 1, m + 1) {
			if (sum1 - t[i] + h[j] == sum2 + t[i] - h[j]) {
				ans1 = min(ans1, t[i]);
				ans2 = min(ans2, h[j]);
			}
		}
		if (ans1 != 100 && ans2 != 100) {
			cout << ans1 << ' ' << ans2 << endl;
		} else {
			cout << -1 << endl;
		}
	}
	return 0;
}