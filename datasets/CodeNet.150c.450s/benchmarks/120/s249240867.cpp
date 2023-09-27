#include "bits/stdc++.h"
using namespace std;
#ifdef _DEBUG
#include "dump.hpp"
#else
#define dump(...)
#endif

//#define int long long
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) begin(c),end(c)
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9) + 7;
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }

signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	for (int R, C; cin >> R >> C&&R;) {
		vector<vector<int>> v(R, vector<int>(C));
		rep(i, 0, R) rep(j, 0, C) { cin >> v[i][j]; }
		dump(v);
		int ans = 0;
		for (int mask = 0; mask < (1 << R); mask++) {
			vector<int> cnt(C);
			rep(i, 0, R) {
				if ((mask >> i) & 1) {
					rep(j, 0, C) {
						cnt[j] += v[i][j];
					}
				}
				else {
					rep(j, 0, C) {
						cnt[j] += !v[i][j];
					}
				}
			}
			int tmp = 0;
			rep(i, 0, C) {
				tmp += max(cnt[i], R - cnt[i]);
			}
			chmax(ans, tmp);
		}
		cout << ans << endl;
	}
	return 0;
}