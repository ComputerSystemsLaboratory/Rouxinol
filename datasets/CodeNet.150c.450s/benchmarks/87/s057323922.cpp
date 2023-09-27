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
bool fall(vvi &v) {
	int h = v.size();
	bool updated = false;
	REP(j, 5) {
		int flag = true;
		while (flag) {
			flag = false;
			RREP(i, h - 1) {
				if (v[i + 1][j] == 0 && v[i][j] != 0) {
					v[i + 1][j] = v[i][j];
					v[i][j] = 0;
					flag = true;
					updated = true;
				}
			}
		}
	}
	return updated;
}
int erase(vvi &v) {
	int h = v.size();
	int ret = 0;
	vvi b(h, vi(5, 0));
	REP(i, h) {
		REP(j, 3) {
			int c = v[i][j], flag = 1;
			REP(k, 3) {
				if (v[i][j + k] != c)flag = 0;
			}
			if (flag) {
				REP(k, 3) {
					b[i][j + k] = 1;
				}
			}
		}
	}
	REP(i, h) {
		REP(j, 5) {
			if (b[i][j]) {
				ret += v[i][j];
				v[i][j] = 0;

			}
		}
	}
	return ret;
}
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	while (1) {
		int h;
		cin >> h;
		if (!h)break;
		vvi v(h, vi(5));
		REP(i, h) {
			REP(j, 5) {
				cin >> v[i][j];
			}
		}
		int ans = 0;
		do {
			ans += erase(v);
		} while (fall(v));
		cout << ans << endl;
	}
	return 0;
}