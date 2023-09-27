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

signed main() {
	int n;
	while (cin >> n, n) {
		n = 1000 - n;
		int ans(0);
		ans += (n / 500);
		n %= 500;
		ans += (n / 100);
		n %= 100;
		ans += (n / 50);
		n %= 50;
		ans += (n / 10);
		n %= 10;
		ans += (n / 5);
		n %= 5;
		ans += n;
		cout << ans << endl;
	}
	return 0;
}