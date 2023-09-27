#include "bits/stdc++.h"
using namespace std;

//#define int long long
#define DBG 0
#define dump(o) if(DBG){cerr<<#o<<" "<<o<<endl;}
#define dumpc(o) if(DBG){cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) c.begin(),c.end()
static const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
static const int MOD = (int)(1e9 + 7);

signed main() {
	for (int n, r; cin >> n >> r&&n;) {
		vector<int> v(n); rep(i, 0, n) { v[i] = n - i; }
		rep(i, 0, r) {
			vector<int> tmp = v;
			int p, c; cin >> p >> c;
			rep(j, 0, p - 1) {
				tmp[j + c] = v[j];
			}
			rep(j, 0, c) {
				tmp[j] = v[j + p - 1];
			}
			swap(tmp, v);
		}
		cout << v[0] << endl;
	}
	return 0;
}