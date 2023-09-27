#include "bits/stdc++.h"
using namespace std;

//#define int int64_t
#define REP(i, s, n) for (signed i = (s); i < signed(n); i++)
#define rep(i, n) REP(i, 0, n)
#define all(c) begin(c), end(c)
#define breakif(cond) if(cond) break; else

#define maxup(ans, x) (ans = (ans < x ? x : ans))
#define minup(ans, x) (ans = (ans > x ? x : ans))

template<typename T>
inline void input(vector<T>& v) { for (auto& x : v) cin >> x; }

using VV = vector<vector<int>>;
using V = vector<int>;
using P = pair<int, int>;
using IP = pair<int, P>;

signed main() {
	int n, m;
	int x = 1;
	while (cin >> n >> m && n) {
		V hs(n), ws(m);
		input(hs); input(ws);
		V hh;
		rep(i, n) {
			int sum = 0;
			REP(j, i, n) hh.push_back(sum += hs[j]);
		}
		sort(all(hh));
		int ans = 0;
		rep(i, m) {
			int sum = 0;
			REP(j, i, m) {
				sum += ws[j];
				ans += upper_bound(all(hh), sum) - lower_bound(all(hh), sum);
			}
		}
		cout << ans << endl;
	}
}