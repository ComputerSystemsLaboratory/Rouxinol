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
const double EPS = 1e-10;

signed main() {
	int a, b;
	while (cin >> a >> b, a || b) {
		int n; cin >> n;
		vector<vector<int>>v(b, vector<int>(a, INF));
		rep(i, 0, n) {
			int x, y; cin >> x >> y;
			x--; y--;
			v[y][x] = 0;
		}
		v[0][0] = 1;
		rep(i, 1, b) {
			v[i][0] = min(v[i - 1][0], v[i][0]);
		}
		rep(i, 1, a) {
			v[0][i] = min(v[0][i - 1], v[0][i]);
		}
		rep(i, 1, b) {
			rep(j, 1, a) {
				if (v[i][j] == INF) {
					v[i][j] = v[i - 1][j] + v[i][j - 1];
				}
			}
		}
		cout << v[b - 1][a - 1] << endl;
	}
	return 0;
}