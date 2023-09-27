#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()
#define fi first
#define se second
template<typename A, typename B> inline bool chmax(A &a, B b) { if (a<b) { a=b; return 1 ; } return 0; }
template<typename A, typename B> inline bool chmin(A &a, B b) { if (a>b) { a=b; return 1 ; } return 0; }
typedef long long ll;
typedef pair<int, int> pii;
const ll INF = 1e9+100;
const bool debug = 0;
/***************************************/

int H, W = 5;
int maps[10][5];

int solera() {
	int res = 0;
	REP(i, H) {
		int eq[5] = {};
		REP(j, W) {
			if (!maps[i][j]) eq[j] = 0;
			else if (j && maps[i][j] == maps[i][j - 1]) eq[j] = eq[j - 1] + 1;
			else eq[j] = 1;
		}
		for (int j = W - 2; j >= 0; j--) {
			if (maps[i][j] == maps[i][j + 1]) eq[j] = eq[j + 1];
		}
		REP(j, W) if (eq[j] >= 3) {
			res += maps[i][j];
			maps[i][j] = 0;
		}
	}
	return res;
}

bool soldro() {
	bool res = false;
	
	REP(j, W) {
		for (int i = H - 2; i >= 0; i--) {
			if (maps[i + 1][j] == 0 && maps[i][j]) {
				maps[i + 1][j] = maps[i][j];
				maps[i][j] = 0;
				res = true;
			}
		}
	}
	return res;
}

int main() {
	while (cin >> H, H) {
		REP(i, H) REP(j, W) scanf("%d", &maps[i][j]);
		
		int ans = 0;
		while (true) {
			int cur = solera();
			ans += cur;
			if (cur == 0) break;
			while (soldro());
		}
		
		if (debug) printf("@ ");
		cout << ans << endl;
	}
	return 0;
}
