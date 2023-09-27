#define _USE_MATH_DEFINES
#include "bits/stdc++.h"
using namespace std;

#define int long long
#define DBG 1
#define dump(o) if(DBG){cerr<<#o<<" "<<o<<endl;}
#define dumpc(o) if(DBG){cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define each(it,c) for(auto it=(c).begin();it!=(c).end();it++)
#define all(c) c.begin(),c.end()
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9 + 7);
int n;
vector<vector<int>>d;
void floyd() {
	rep(k, 0, n) {
		rep(i, 0, n) {
			if (d[i][k] == INF)continue;
			rep(j, 0, n) {
				if (d[k][j] == INF)continue;
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
}
signed main() {
	int e, u, v, c;
	cin >> n >> e;
	d = vector<vector<int>>(n, vector<int>(n, INF));
	rep(i, 0, n)d[i][i] = 0;
	rep(i, 0, e) {
		cin >> u >> v >> c;
		d[u][v] = c;
	}
	floyd();
	bool negative = false;
	rep(i, 0, n)if (d[i][i] < 0)negative = true;
	if (negative) {
		cout << "NEGATIVE CYCLE" << endl;
	}
	else {
		rep(i, 0, n) {
			rep(j, 0, n) {
				if (j)cout << " ";
				if (d[i][j] == INF)cout << "INF";
				else cout << d[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}