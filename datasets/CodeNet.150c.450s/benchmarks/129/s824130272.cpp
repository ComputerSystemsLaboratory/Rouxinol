#include "bits/stdc++.h"
using namespace std;

//#define int long long
#define DBG 0
#define dump(o) if(DBG){cerr<<#o<<" "<<o<<endl;}
#define dumpc(o) if(DBG){cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) c.begin(),c.end()
static const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
static const int MOD = (int)(1e9 + 7);

signed main() {
	int r, c; cin >> r >> c;
	vector<vector<int>> v(r+1, vector<int>(c+1, 0));
	rep(i, 0, r) rep(j, 0, c) cin >> v[i][j];
	rep(i, 0, r) {
		v[i][c] = accumulate(v[i].begin(), v[i].end(), 0);
	}
	rep(j, 0, c+1) {
		rep(i, 0, r) {
			v[r][j] += v[i][j];
		}
	}
	rep(i, 0, v.size()) {
		cout << v[i][0];
		rep(j, 1, v[i].size()) { cout << " " << v[i][j]; }
		cout << endl;
	}

	return 0;
}