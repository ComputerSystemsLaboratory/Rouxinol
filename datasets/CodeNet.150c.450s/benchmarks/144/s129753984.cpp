#include "bits/stdc++.h"
using namespace std;

#define int long long
#define DBG 0
#define dump(o) if(DBG){cerr<<#o<<" "<<o<<endl;}
#define dumpc(o) if(DBG){cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) c.begin(),c.end()
static const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
static const int MOD = (int)(1e9 + 7);

signed main() {
	int n, m, l; cin >> n >> m >> l;
	vector<vector<int>> a(n, vector<int>(m, 0));
	rep(i, 0, n) rep(j, 0, m) cin >> a[i][j];
	vector<vector<int>> b(m, vector<int>(l, 0));
	rep(i, 0, m) rep(j, 0, l) cin >> b[i][j];
	vector<vector<int>> c(n, vector<int>(l, 0));
	rep(i, 0, n) rep(j, 0, l) rep(k, 0, m) {
		c[i][j] += a[i][k] * b[k][j];
	}
	rep(i, 0, c.size()) {
		cout << c[i][0];
		rep(j, 1, c[i].size()) { cout << " " << c[i][j]; }
		cout << endl;
	}

	return 0;
}