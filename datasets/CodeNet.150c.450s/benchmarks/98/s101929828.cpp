#include "bits/stdc++.h"
using namespace std;

//#define int long long
#define DBG 0
#define dump(o) if(DBG){cerr<<#o<<" "<<o<<endl;}
#define dumpc(o) if(DBG){cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define each(it,c) for(auto it=(c).begin();it!=(c).end();it++)
#define all(c) c.begin(),c.end()
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9 + 7);

signed main() {
	for (int n, m; cin >> n >> m&&n;) {
		vector<int> a(n); rep(i, 0, n) { cin >> a[i]; }
		vector<int> b(m); rep(i, 0, m) { cin >> b[i]; }
		dumpc(a);
		dumpc(b);
		int A = accumulate(a.begin(), a.end(), 0);
		int B = accumulate(b.begin(), b.end(), 0);
		dump(A); dump(B);
		int mi = INF;
		int ansa, ansb;
		rep(i, 0, n)rep(j, 0, m) {
			if ((a[i] - b[j]) * 2 == A - B) {
				if (mi < a[i] + b[j])continue;
				mi = a[i] + b[j];
				ansa = a[i];
				ansb = b[j];
			}
		}
		if (mi == INF)cout << -1 << endl;
		else cout << ansa << " " << ansb << endl;
	}
	return 0;
}