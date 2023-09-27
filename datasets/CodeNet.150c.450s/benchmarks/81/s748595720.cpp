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
vector<vector<int>>d = vector<vector<int>>(10, vector<int>(10, INF));;
int n;
signed main() {
	while (cin >> n, n) {
		d = vector<vector<int>>(10, vector<int>(10, INF));;
		rep(i, 0, 10)d[i][i] = 0;
		int x(0), y(0);
		rep(i, 0, n) {
			int a, b, c; cin >> a >> b >> c;
			x = max(x, a); y = max(y, b);
			d[a][b] = c; d[b][a] = c;
		}
		rep(k, 0, 10) {
			rep(i, 0, 10) {
				rep(j, 0, 10) {
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
				}
			}
		}
		int z = max(x, y);
		int sum(INF), ind(0);
		rep(i, 0, z + 1) {
			int v = accumulate(d[i].begin(), d[i].begin() + z + 1, 0);
			if (sum > v) {
				sum = v;
				ind = i;
			}
		}
		cout << ind << " " << sum << endl;
	}
	return 0;
}