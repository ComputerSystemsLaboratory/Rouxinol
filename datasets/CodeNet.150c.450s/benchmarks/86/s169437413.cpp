#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef vector<pint> vpint;
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,n) for(int i=n-1;i>=(0);i--)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define each(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)
#define all(v) (v).begin(),(v).end()
#define eall(v) unique(all(v), v.end())
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define chmax(a, b) a = (((a)<(b)) ? (b) : (a))
#define chmin(a, b) a = (((a)>(b)) ? (b) : (a))
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFF = 1e18;


int main(void) {
	while(1) {
		int N, M, P;
		int x[110];
		scanf("%d %d %d", &N, &M, &P);
		if(N == 0 && M == 0 && P == 0) break;
		reps(i, 1, N + 1) scanf("%d", &x[i]);

		ll sum = 0;
		reps(i, 1, N + 1) sum += 100 * x[i];

		ll ans;
		// printf("sum %d\n", sum);
		if(x[M] != 0) ans = (double)sum * (100 - P) / 100.0 / x[M];
		else ans = 0;
		printf("%lld\n", ans);
	}
	return 0;
}