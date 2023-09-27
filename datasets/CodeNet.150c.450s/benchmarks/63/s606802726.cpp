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
int n, m, r; const int W(1), B(0);
vector<vector<pair<int, int>>>adj; // dist, cost
void dijkstra() {
	vector<int>d(n, INF), color(n, W);
	d[r] = 0;
	priority_queue<pair<int, int>>pq; // d[v], v
	pq.push(make_pair(0, r));
	while (!pq.empty()) {
		pair<int, int>f(pq.top()); pq.pop();
		color[f.second] = B;
		if (d[f.second] < (-1)*f.first)continue;
		rep(i, 0, adj[f.second].size()) {
			pair<int, int>u(adj[f.second][i]);
			if (color[u.first] != B&&d[f.second] + u.second < d[u.first]) {
				d[u.first] = d[f.second] + u.second;
				pq.push(make_pair((-1)*d[u.first], u.first));
			}
		}
	}
	rep(i, 0, n) {
		if (d[i] == INF)cout << "INF" << endl;
		else cout << d[i] << endl;
	}
}
signed main() {
	cin >> n >> m >> r; adj = vector<vector<pair<int, int>>>(n, vector<pair<int,int>>());
	rep(i, 0, m) {
		int s, t, d; cin >> s >> t >> d;
		adj[s].push_back(make_pair(t, d));
	}
	dijkstra();
	return 0;
}