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

int daycount(int y, int m, int d) {
	int res = 0;
	
	y--;
	res += y / 3 * 590;
	y %= 3;
	res += y * 195;
	
	if (y == 2) res += 20 * (m - 1) + d;
	else {
		if (m & 1) {
			res += 39 * (m / 2);
		}
		else {
			res += 20 + 39 * (m/ 2 - 1);
		}
		res += d;
	}
	return res;
}

int main() {
	int n;
	cin >> n;
	REP(i, n) {
		int y, m, d;
		scanf("%d %d %d", &y, &m, &d);
		if (debug) printf("@ ");
		
		cout << daycount(1000, 1, 1) - daycount(y, m, d) << endl;
		
	}
	return 0;
}
