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
	for (int a, b, c; cin >> a >> b >> c&&a;) {
		vector<int> P(a); rep(i, 0, a) { cin >> P[i]; }
		int g = INF;
		int ans = 0;
		rep(i, 1, a) {
			if (i >= b&&i <= c) {
				if (g >= P[i] - P[i - 1]) {
					g = P[i] - P[i - 1];
					ans = i;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}