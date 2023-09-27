#include "bits/stdc++.h"

#define REP(i,n) for(ll i=0;i<n;++i)
#define RREP(i,n) for(ll i=n-1;i>=0;--i)
#define FOR(i,m,n) for(ll i=m;i<n;++i)
#define RFOR(i,m,n) for(ll i=n-1;i>=m;--i)
#define ALL(v) (v).begin(),(v).end()
#define PB(a) push_back(a)
#define UNIQUE(v) v.erase(unique(ALL(v)),v.end());
#define DUMP(v) REP(aa, (v).size()) { cout << v[a]; if (a != v.size() - 1)cout << " "; else cout << endl; }
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
ll max(ll a, int b) { return max(a, ll(b)); }
ll max(int a, ll b) { return max(ll(a), b); }
ll min(ll a, int b) { return min(a, ll(b)); }
ll min(int a, ll b) { return min(ll(a), b); }
///(?´????????`)(?´????????`)(?´????????`)(?´????????`)(?´????????`)(?´????????`)///
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	vi dp(1000001,INF), dp2(1000001,INF);
	dp[0] = 0; dp2[0] = 0;
	for (int i = 1; i*(i + 1)*(i + 2) / 6 <= 1000000; ++i) {
		int k = i*(i + 1)*(i + 2) / 6;
		
		REP(j, 1000001-k) {
			dp[j + k] = min(dp[j + k], dp[j] + 1);
		}
	}
	for (int i = 1; i*(i + 1)*(i + 2) / 6 <= 1000000; ++i) {
		int k = i*(i + 1)*(i + 2) / 6;
		if (k % 2 == 0)continue;
	
		REP(j, 1000001 - k) {
			dp2[j + k] = min(dp2[j + k], dp2[j] + 1);
		}
	}
	while (1) {
		int n;
		cin >> n;
		if (!n)break;
		cout << dp[n] <<" "<<dp2[n]<< endl;
	}
	return 0;
}