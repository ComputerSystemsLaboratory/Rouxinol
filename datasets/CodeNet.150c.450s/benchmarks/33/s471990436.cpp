#include "bits/stdc++.h"

#define REP(i,n) for(ll i=0;i<n;++i)
#define RREP(i,n) for(ll i=n-1;i>=0;--i)
#define FOR(i,m,n) for(ll i=m;i<n;++i)
#define RFOR(i,m,n) for(ll i=n-1;i>=m;--i)
#define ALL(v) (v).begin(),(v).end()
#define PB(a) push_back(a)
#define UNIQUE(v) v.erase(unique(ALL(v)),v.end());
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
ll max(ll a, int b) { return max(a, ll(b)); }
ll max(int a, ll b) { return max(ll(a), b); }
///(テつエテ」ツδサテ渉嘉」ツδサ`)(テつエテ」ツδサテ渉嘉」ツδサ`)(テつエテ」ツδサテ渉嘉」ツδサ`)(テつエテ」ツδサテ渉嘉」ツδサ`)(テつエテ」ツδサテ渉嘉」ツδサ`)(テつエテ」ツδサテ渉嘉」ツδサ`)///
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	while (1) {
		int x, y, s;
		cin >> x >> y >> s;
		if (x == 0)break;
		int cmax = -INF;
		FOR(i, 1, s - 1) {
			FOR(j, 1, s - 1) {
				if (i*(100 + x) / 100 + j*(100 + x) / 100 == s)cmax = max(cmax, i*(100 + y) / 100 + j*(100 + y) / 100);
			}
		}
		cout << cmax << endl;

	}
	return 0;
}