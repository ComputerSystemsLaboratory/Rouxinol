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
vector<vector<int>>vec;
int n;
vector<int>color;
void bsf(int s,int c) {
	queue<int>q;
	q.push(s);
	color[s] = c;
	while (!q.empty()) {
		int u = q.front(); q.pop();
		rep(v, 0, vec[u].size()) {
			if (color[vec[u][v]] != -1)continue;
			color[vec[u][v]] = c;
			q.push(vec[u][v]);
		}
	}
}
void solve() {
	rep(i, 0, n) {
		if (color[i] == -1)bsf(i, i);
	}
}
signed main() {
	cin >> n; vec = vector<vector<int>>(n); color = vector<int>(n, -1);
	int m; cin >> m;
	rep(i, 0, m) {
		int s, t; cin >> s >> t;
		vec[s].push_back(t);
		vec[t].push_back(s);
	}
	solve();
	int q; cin >> q;
	rep(i, 0, q) {
		int s, t; cin >> s >> t;
		if (color[s] == color[t])cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}