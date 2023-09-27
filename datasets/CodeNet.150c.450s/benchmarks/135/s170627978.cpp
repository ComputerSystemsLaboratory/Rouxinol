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
	int N, M;
	while (cin >> N >> M, N || M) {
		vector<int>h(N), w(M);
		rep(i, 0, N)cin >> h[i];
		rep(i, 0, M)cin >> w[i];
		int MAX = 1500009;
		vector<int>x(MAX, 0), y(MAX, 0);

		rep(i, 0, N) {
			int t(0);
			rep(j, i, N) {
				t += h[j];
				x[t]++;
			}
		}

		rep(i, 0, M) {
			int t(0);
			rep(j, i, M) {
				t += w[j];
				y[t]++;
			}
		}

		int ans(0);
		rep(i, 0, MAX)ans += x[i] * y[i];
		cout << ans << endl;

	}
	return 0;
}