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
	for (int n, p; cin >> n >> p&&n;) {
		vector<int> a(n, 0);
		int owan = p;
		for (int i = 0;; (++i) %= n) {
			if (owan) {
				a[i]++;
				owan--;
				if (owan == 0 && a[i] == p) {
					cout << i << endl;
					break;
				}
			}
			else {
				owan = a[i];
				a[i] = 0;
			}
		}
	}
	return 0;
}