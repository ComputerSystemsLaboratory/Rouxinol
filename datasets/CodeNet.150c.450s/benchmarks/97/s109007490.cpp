#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define REP(i, a, b) for (int i = (int)a; i < (int)b; ++i)
#define rer(i, a, b) for (int i = (int)a; i <= (int)b; ++i)
#define each(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
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
	int N;
	while (cin >> N, N) {
		vector<int> x(N), y(N);
		REP(i, 1, N) {
			int n, d;
			cin >> n >> d;
			x[i] = x[n] + dx[d];
			y[i] = y[n] + dy[d];
		}

		int min_x = INT_MAX, max_x = INT_MIN;
		int min_y = INT_MAX, max_y = INT_MIN;
		rep(i, N) {
			min_x = min(min_x, x[i]);
			max_x = max(max_x, x[i]);
			min_y = min(min_y, y[i]);
			max_y = max(max_y, y[i]);
		}
		cout << (max_x - min_x + 1) << ' ' << (max_y - min_y + 1) << endl;
	}
	return 0;
}