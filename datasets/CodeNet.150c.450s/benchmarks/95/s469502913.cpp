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
	for (int n; cin >> n&&n;) {
		bool l = false, r = false;
		char prev = 'd';
		int cnt = 0;
		rep(i, 0, n) {
			string s; cin >> s;
			if (s == "lu") {
				l = true;
			}
			if (s == "ru") {
				r = true;
			}
			if (s == "ld") {
				l = false;
			}
			if (s == "rd") {
				r = false;
			}
			if (prev == 'd' && l && r) {
				cnt++;
				prev = 'u';
			}
			if (prev == 'u' && !l && !r) {
				cnt++;
				prev = 'd';
			}
		}
		cout << cnt << endl;
	}
	return 0;
}