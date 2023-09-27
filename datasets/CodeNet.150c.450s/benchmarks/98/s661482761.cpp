#include "bits/stdc++.h"
using namespace std;

//#define int int64_t

#define CHOOSE(a) CHOOSE2 a
#define CHOOSE2(a0,a1,a2,a3,x,...) x
#define REP1(i, s, cond, cal) for (signed i = signed(s); i cond; i cal)
#define REP2(i, s, n) REP1(i, s, < signed(n), ++)
#define REP3(i, n) REP2(i, 0, n)
#define rep(...) CHOOSE((__VA_ARGS__,REP1,REP2,REP3))(__VA_ARGS__)

#define all(c) begin(c), end(c)
#define maxup(ans, x) (ans = (ans < x ? x : ans))
#define minup(ans, x) (ans = (ans > x ? x : ans))

#define breakif(cond) if(cond) break; else

template<typename T>
inline void input(vector<T>& v) { for (auto& x : v) cin >> x; }

using VV = vector<vector<int>>;
using V = vector<int>;
using P = pair<int, int>;
using IP = pair<int, P>;

const int INF = 1 << 29;

signed main() {
	int n;
	while (cin >> n && n) {
		int m; cin >> m;
		V hana(n), taro(m);
		input(hana); input(taro);
		int hs = accumulate(all(hana), 0), ts = accumulate(all(taro), 0);
		int part = (hs + ts) / 2;
		bool ok = false;
		rep(i, n) rep(j, m) breakif(ok) {
			int h = hana[i], t = taro[j];
			if (t - h == part - hs && h - t == part - ts) {
				cout << h << " " << t << endl;
				ok = true;
			}
		}

		if (!ok) cout << -1 << endl;
	}
}