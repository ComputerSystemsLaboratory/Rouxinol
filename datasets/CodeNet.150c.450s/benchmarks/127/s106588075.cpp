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
	int m; cin >> m;
	while (m--) {
		string str; cin >> str;
		set<string> ans;
		REP(i, 1, str.size()) {
			string sub1[2], sub2[2];
			sub1[0] = sub1[1] = str.substr(0, i);
			sub2[0] = sub2[1] = str.substr(i);
			reverse(all(sub1[1]));
			reverse(all(sub2[1]));

			rep(j, 2) rep(k, 2) {
				ans.insert(sub1[j] + sub2[k]);
				ans.insert(sub2[j] + sub1[k]);
			}
		}
		cout << ans.size() << endl;
	}
	return 0;
}