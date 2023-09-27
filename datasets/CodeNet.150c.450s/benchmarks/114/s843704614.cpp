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
const int W = 0;const int G = 1;const int B = 2;
int n; vector<vector<int>>M;
int prim() {
	int u, minv;
	vector<int>d(n, INF), p(n, -1), color(n, W);
	d[0] = 0;
	while (1) {
		minv = INF;
		u = -1;
		rep(i, 0, n) {
			if (minv > d[i] && color[i] != B) {
				minv = d[i];
				u = i;
			}
		}
		if (u == -1)break;
		color[u] = B;
		rep(v, 0, n) {
			if (color[v] != B&&M[u][v] < d[v]) {
				d[v] = M[u][v];
				p[v] = u;
			}
		}
	}
	int sum(0);
	rep(i, 0, n) {
		if (p[i] != -1)sum += M[i][p[i]];
	}
	return accumulate(d.begin(), d.end(),0);

}
signed main() {
	cin >> n; M = vector<vector<int>>(n, vector<int>(n,INF));
	rep(i, 0, n) {
		rep(j, 0, n) {
			int e; cin >> e;
			M[i][j] = (e == -1) ? INF : e;
		}
	}
	cout << prim() << endl;
	return 0;
}