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
	for (int N; cin >> N&&N;) {
		map<int, pair<int, int>> mp;
		mp[0] = make_pair(250, 250);
		vector<vector<int>> a(500, vector<int>(500, -1));
		a[250][250] = 0;
		vector<int> n(N), d(N); rep(i, 1, N) {
			cin >> n[i] >> d[i];
			int x = mp[n[i]].first;
			int y = mp[n[i]].second;
			if (d[i] == 0) {
				a[x - 1][y] = i;
				mp[i] = make_pair(x - 1, y);
			}
			if (d[i] == 1) {
				a[x][y - 1] = i;
				mp[i] = make_pair(x, y - 1);
			}
			if (d[i] == 2) {
				a[x + 1][y] = i;
				mp[i] = make_pair(x + 1, y);
			}
			if (d[i] == 3) {
				a[x][y + 1] = i;
				mp[i] = make_pair(x, y + 1);
			}
		}
		int W = 0, H = 0;
		int w = INF, h = INF;
		rep(i, 0, 500) {
			rep(j, 0, 500) {
				if (a[i][j] != -1) {
					w = min(w, i);
					W = max(W, i);
					h = min(h, j);
					H = max(H, j);
				}
			}
		}
		cout << W - w + 1 << " " << H - h + 1 << endl;
	}
	return 0;
}