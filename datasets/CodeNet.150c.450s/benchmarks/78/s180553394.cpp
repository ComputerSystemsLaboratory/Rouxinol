#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<stdio.h>
#include<time.h>
#include<math.h>
#include<algorithm>
#include<string>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<deque>
#include<set>
#include<map>
#define REP(i, N) for(ll i = 0; i < N; ++i)
#define FOR(i, a, b) for(ll i = a; i < b; ++i)
#define ALL(a) (a).begin(),(a).end()
#define pb push_back
#define INF 1000000000
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int qx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int qy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

vector<ll> p;
vector<ll> o;
vector<ll> memo(1000001, INF);

ll cal(ll n) {
	if(memo[n] != INF) return memo[n];
	else {
		ll ans = INF;
		ll i = o.size() - 1;
		while(i >= 0) {
			if(n - o[i] > 0)
			ans = min(ans, 1 + cal(n - o[i]));
			--i;
		}
		return memo[n] = ans;
	}
}

int main(void) {

	for(ll i = 0; i * (i + 1) * (i + 2) / 6 <= 1000000; ++i) {
		p.pb(i * (i + 1) * (i + 2) / 6);
		if((i * (i + 1) * (i + 2) / 6) % 2 == 1) o.pb(i * (i + 1) * (i + 2) / 6);
	}
	vector<P> nf;
	map<ll, ll> nb;
	REP(i, p.size()) {
		REP(j, p.size()) {
			if(p[i] + p[j] > 1000000) continue;
			nf.pb(P(p[i] + p[j], (ll)(p[i] != 0) + (ll)(p[j] != 0)));
			REP(k, p.size()) {
				if(nb.count(p[i] + p[j] + p[k]) != 0)
				nb[p[i] + p[j] + p[k]] = min(nb[p[i] + p[j] + p[k]], (ll)(p[i] != 0) + (ll)(p[j] != 0) + (ll)(p[k] != 0));
				else
				nb[p[i] + p[j] + p[k]] = (ll)(p[i] != 0) + (ll)(p[j] != 0) + (ll)(p[k] != 0);
			}
		}
	}
	memo[0] = 0;
	REP(i, o.size()) {
		memo[o[i]] = 1;
	}
	while(true) {
		ll n;
		cin>>n;
		if(n == 0) break;
		ll ans1 = INF, ans2 = INF;
		REP(i, nf.size()) {
			if(nb.count(n - nf[i].first) != 0) {
				ans1 = min(ans1, nf[i].second + nb[n - nf[i].first]);
			}
		}
		ans2 = cal(n);
		cout<<ans1<<" "<<ans2<<endl;
	}
}