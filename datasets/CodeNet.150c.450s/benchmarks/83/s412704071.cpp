#include "bits/stdc++.h"

#define REP(i,n) for(ll i=0;i<n;++i)
#define RREP(i,n) for(ll i=n-1;i>=0;--i)
#define FOR(i,m,n) for(ll i=m;i<n;++i)
#define RFOR(i,m,n) for(ll i=n-1;i>=m;--i)
#define ALL(v) (v).begin(),(v).end()
#define PB(a) push_back(a)
#define UNIQUE(v) v.erase(unique(ALL(v),v.end()));
#define DUMP(v) REP(i, (v).size()) { cout << v[i]; if (i != v.size() - 1)cout << " "; else cout << endl; }
#define INF 1000000001ll
#define MOD 1000000007ll
#define EPS 1e-9

const int dx[8] = { 1,1,0,-1,-1,-1,0,1 };
const int dy[8] = { 0,1,1,1,0,-1,-1,-1 };


using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
///(?´????????`)(?´????????`)(?´????????`)(?´????????`)(?´????????`)(?´????????`)///

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	ll n, W;
	cin >> n >> W;
	vi v(n), w(n);
	ll sumw = 0;
	REP(i, n) {
		cin >> v[i] >> w[i];
		sumw += w[i];
	}
	vvi dp(n + 1, vi(W+1, -INF));
	REP(i,W+1)dp[0][i] = 0;
	REP(i, n) {
		REP(j, W+1) {
			if (j < w[i])dp[i + 1][j] = dp[i][j];
			else dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
		}
	}

	cout << dp[n][W] << endl;
}