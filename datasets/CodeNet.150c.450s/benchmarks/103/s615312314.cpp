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
int dfs(int n, int max, int s) {
	if (n == 1) {
		if (max <= s&&s <= 9)return 1;
		else return 0;
	}
	int sum(0);
	for (int i = max; i <= 9; i++) {
		sum += dfs(n - 1, i + 1, s - i);
	}
	return sum;
}
signed main() {
	int n, s;
	while (cin >> n >> s, n || s) {
		cout << dfs(n, 0, s) << endl;
	}

	return 0;
}