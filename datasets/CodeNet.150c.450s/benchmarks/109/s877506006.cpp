#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int>    VI;
typedef vector<bool>   VB;
typedef vector<string> VS;

#define MP make_pair
#define PB push_back
#define ALL(x)  (x).begin(),(x).end()
#define rep(i, N)  for (int i = 0; i < (int)(N); i++)
#define REP(i, init, N)  for (int i = (init); i < (int)(N); i++)
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl

int n;
VI ss, gs;

const int INF = INT_MAX / 2;

bool check(int s, int g, VI& gts) {
	rep (i, gts.size()) {
		if (s >= gts[i]) {
			gts[i] = INF;
			return true;
		}
	}
	return false;
}

int main(void) {
	while (1) {
		ss.clear();
		gs.clear();
		cin >> n;
		if (n == 0) break;
		VI gts;
		rep (i, n) {
			int h, m, s;
			scanf("%d:%d:%d", &h, &m, &s);
			int stime = h * 60 * 60;
			stime += m * 60;
			stime += s;
			scanf("%d:%d:%d", &h, &m, &s);
			int gtime = h * 60 * 60;
			gtime += m * 60;
			gtime += s;
			ss.PB(stime);
			gs.PB(gtime);
			gts.PB(gtime);
		}
		sort(ALL(gts));
		reverse(ALL(gts));
		int ans = 0;
		rep (i, n) {
			if (!check(ss[i], gs[i], gts)) {
				ans++;
			}
		}
		cout << ans << endl;
	}
    return 0;
}