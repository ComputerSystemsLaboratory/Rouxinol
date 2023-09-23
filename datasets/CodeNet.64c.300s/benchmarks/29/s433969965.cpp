#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define REP(i, a, b) for (int i = (int)a; i < (int)b; ++i)
#define rer(i, a, b) for (int i = (int)a; i <= (int)b; ++i)
#define each(i,c) for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
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
const double eps = 1e-9;
const int dx[] = { -1, 0, 1, 0};
const int dy[] = { 0, -1, 0, 1};

int main() {
	// cin.tie(0); // tie
	// ios::sync_with_stdio(false); // sync
	int e;
	while (cin >> e, e) {
		int ans = inf;
		for (int z = 0; z * z * z <= e; ++z) {
			for (int y = 0; y * y + z * z * z <= e; ++y) {
				int x = e - (y * y + z * z * z);
				ans = min(ans, x + y + z);
			}
		}
		cout << ans << endl;
	}
	return 0;
}