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

void pad(string &s, int n, char c = '0') {
	string p = "";
	rep(i, 0, n - s.size())p += c;
	s = p + s;
}

signed main() {
	for (int a, L; cin >> a >> L && (a || L);) {
		string s = to_string(a);
		pad(s, L);
		int cnt = 0;
		map<string, int> mp;
		while (mp.count(s) == 0) {
			mp[s] = cnt;
			cnt++;

			sort(s.begin(), s.end());
			int m = stoi(s);
			reverse(s.begin(), s.end());
			int M = stoi(s);
			s = to_string(M - m);
			pad(s, L);
		}
		cout << mp[s] << " " << stoi(s) << " " << cnt - mp[s] << endl;
	}
	return 0;
}