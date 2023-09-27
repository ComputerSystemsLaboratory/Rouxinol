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
const int dx[] = { -1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

int main() {
	// cin.tie(0); // tie
	// ios::sync_with_stdio(false); // sync
	int m; cin >> m;
	while (m--) {
		string str; cin >> str;
		set<string> ans;
		REP(i, 1, str.size()) {
			string sub[5];
			sub[0] = sub[4] = str.substr(0, i);
			sub[1] = str.substr(i);
			sub[2] = sub[0];
			reverse(all(sub[2]));
			sub[3] = sub[1];
			reverse(all(sub[3]));

			for (int i = 0; i < 4; ++i) ans.insert(sub[i] + sub[i + 1]);
			for (int i = 4; i > 0; --i) ans.insert(sub[i] + sub[i - 1]);
		}
		cout << ans.size() << endl;
	}
	return 0;
}