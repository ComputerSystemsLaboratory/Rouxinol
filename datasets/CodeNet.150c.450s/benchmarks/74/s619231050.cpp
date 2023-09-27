#define _USE_MATH_DEFINES
#include "bits/stdc++.h"
using namespace std;

//#define int long long
#define DBG 1
#define dump(o) if(DBG){cerr<<#o<<" "<<o<<endl;}
#define dumpc(o) if(DBG){cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define each(it,c) for(auto it=(c).begin();it!=(c).end();it++)
#define all(c) c.begin(),c.end()
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9 + 7);

signed main() {
	int n, m; cin >> n >> m;
	vector<int>c(m+1); rep(i, 1, m+1)cin >> c[i];
	vector<vector<int> >v(m+1, vector<int>(n + 1));
	sort(c.begin(), c.end());
	rep(i, 0, m + 1)v[i][0] = 0;
	rep(i, 0, n + 1)v[0][i] = INF;

	rep(i, 1, m+1) {
		rep(j, 1, n + 1) {
			if (j - c[i] < 0)v[i][j] = v[i-1][j];
			else v[i][j] = min(v[i-1][j], v[i][j - c[i]]+1);
		}
	}

	cout << v[m][n] << endl;
	return 0;
}