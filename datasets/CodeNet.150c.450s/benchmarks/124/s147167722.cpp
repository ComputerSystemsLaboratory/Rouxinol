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
const int W = 0; const int B = 1;
int n;
vector<vector<pair<int, int>>>M;
void dijkstra() {
	int minv;
	vector<int>d(n, INF), color(n, W);
	d[0] = 0;
	while (1) {
		minv = INF;
		int u = -1;
		rep(i, 0, n) {
			if (color[i] != B&&d[i] < minv) {
				u = i;
				minv = d[i];
			}
		}
		if (u == -1)break;
		color[u] = B;
		rep(v, 0, M[u].size()) {
			pair<int, int>t(M[u][v]);
			if (color[t.first] != B&&d[u] + t.second < d[t.first]) {
				d[t.first] = d[u] + t.second;
			}
		}
	}
	rep(i, 0, n) {
		cout << i << " " << d[i] << endl;
	}
}
signed main() {
	cin >> n; M = vector<vector<pair<int, int>>>(n, vector<pair<int, int>>());
	rep(i, 0, n) {
		int u, k; cin >> u >> k;
		rep(j, 0, k) {
			int v, c; cin >> v >> c;
			M[u].push_back(make_pair(v, c));
		}
	}
	dijkstra();
	return 0;
}