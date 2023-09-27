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
	while (1) {
		int n, m;
		cin >> n >> m;
		if (!n)break;
		vi h(n), w(m);
		REP(i, n)cin >> h[i];
		REP(i, m)cin >> w[i];
		vi acum(n + 1);
		acum[0] = 0;
		REP(i, n)acum[i + 1] = acum[i] + h[i];
		vi v;
		REP(i, n) {
			FOR(j, i, n) {
				v.push_back(acum[j + 1] - acum[i]);
			}
		}
		vi acum2(m + 1);
		acum2[0] = 0;
		REP(i, m)acum2[i + 1] = acum2[i] + w[i];
		vi u;
		REP(i, m) {
			FOR(j, i, m) {
				u.push_back(acum2[j + 1] - acum2[i]);
			}
		}
		sort(ALL(v)); sort(ALL(u));
		int ans = 0;
		REP(i, v.size()) {
			ans += upper_bound(ALL(u), v[i]) - lower_bound(ALL(u), v[i]);
		}
		cout << ans << endl;
	}
	return 0;
}