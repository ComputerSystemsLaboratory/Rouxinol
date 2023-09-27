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
		int N, M;
		int D[10010], P[10010];
		scanf("%d %d", &N, &M);
		if(N == 0 && M == 0) break;
		rep(i, N) scanf("%d %d", &D[i], &P[i]);

		vector<pair<int, int>> v;
		rep(i, N) v.pb(mp(P[i], D[i]));
		sort(all(v)); reverse(all(v));

		ll ans = 0;
		ll cnt = M;
		for(auto t : v) {
			int E = t.fi, dist = t.se;
			if(cnt - dist >= 0) cnt -= dist;
			else if(cnt > 0) {
				ll m = dist - cnt;
				cnt = 0;
				ans += m * E;
			}else {
				ll m = dist;
				ans += m * E;
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}