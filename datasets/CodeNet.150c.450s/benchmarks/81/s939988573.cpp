#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()
#define fi first
#define se second

template<typename A, typename B> inline bool chmax(A &a, B b) { if (a<b) { a=b; return 1; } return 0; }
template<typename A, typename B> inline bool chmin(A &a, B b) { if (a>b) { a=b; return 1; } return 0; }

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<int, pll> pip;
const ll INF = 1ll<<29;
const ll MOD = 1000000007;
const double EPS  = 1e-9;

int main() {
	int n;
	while (cin >> n, n) {
		int d[10][10];
		fill(d[0], d[10], INF);
		
		REP(i, n) {
			int a, b, c;
			scanf("%d %d %d", &a, &b, &c);
			chmin(d[a][b], c);
			chmin(d[b][a], c);
			d[a][a] = 0;
			d[b][b] = 0;
		}
		
		REP(k, 10) REP(i, 10) REP(j, 10) chmin(d[i][j], d[i][k] + d[k][j]);
		
		int anss = INF, ansp = -1;
		REP(i, 10) if (!d[i][i]) {
			int sum = 0;
			REP(j, 10) if (d[i][j] != INF) sum += d[i][j];
			if (chmin(anss, sum)) ansp = i;
		}
		
		printf("%d %d\n", ansp, anss);
	}
	return 0;
}