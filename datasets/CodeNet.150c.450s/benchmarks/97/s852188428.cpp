#include "bits/stdc++.h"
#define int long long
#define REP(i, s, n) for (signed i = (s); i < signed(n); i++)
#define rep(i, n) REP(i, 0, n)
#define all(c) (c).begin(), (c).end()


const int INF = 1 << 29;

using namespace std;

using VV = vector<vector<int>>;
using V = vector<int>;
using P = pair<int, int>;
using IP = pair<int, P>;

int dr[] = { 0, 1, 0, -1 };
int dc[] = { -1, 0, 1, 0 };
const int MOD = 1000000007;

signed main() {

	int n;

	while (cin >> n && n)
	{
		vector<P> vec(n);
		vec[0] = P(0, 0);
		int minr = 0, minc = 0;
		int maxr = 0, maxc = 0;
		REP(i, 1, n) {
			int idx, dir; cin >> idx >> dir;
			P p = vec[idx];
			P np = P(p.first + dr[dir], p.second + dc[dir]);
			minr = min(minr, np.first);
			minc = min(minc, np.second);
			maxr = max(maxr, np.first);
			maxc = max(maxc, np.second);
			vec[i] = np;
		}

		cout << maxc - minc + 1 << " " << maxr - minr + 1 << endl;

	}
	
}