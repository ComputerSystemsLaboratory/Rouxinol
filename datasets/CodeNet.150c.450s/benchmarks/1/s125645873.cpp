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
int lis(vector<int>v) {
	vector<int>L;
	L.push_back(v[0]);
	rep(i, 1, v.size()) {
		if (L.back() < v[i])L.push_back(v[i]);
		else {
			*lower_bound(all(L), v[i]) = v[i];
		}
	}
	return L.size();
}
signed main() {
	int n; cin >> n; vector<int>v(n); rep(i, 0, n)cin >> v[i];
	cout << lis(v) << endl;
	return 0;
}