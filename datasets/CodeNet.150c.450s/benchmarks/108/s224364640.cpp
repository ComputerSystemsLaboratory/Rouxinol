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
vector<vector<int> >vec;
int n;
vector<int>d;
void bfs(int s) {
	queue<int>q;
	q.push(s);
	d[s] = 0;
	while (!q.empty()) {
		int u = q.front(); q.pop();
		rep(v, 0, vec[u].size()) {
			if (d[vec[u][v]] != INF)continue;
			d[vec[u][v]] = d[u] + 1;
			q.push(vec[u][v]);
		}
	}
	rep(i, 0, n) {
		cout << i + 1 << " " << ((d[i]==INF)?-1:d[i]) << endl;
	}
}
signed main() {
	cin >> n; vec = vector<vector<int> >(n); d = vector<int>(n, INF);
	rep(i, 0, n) {
		int u, k; cin >> u >> k; u--;
		rep(j, 0, k) {
			int v; cin >> v; v--;
			vec[u].push_back(v);
		}
	}
	bfs(0);

	return 0;
}