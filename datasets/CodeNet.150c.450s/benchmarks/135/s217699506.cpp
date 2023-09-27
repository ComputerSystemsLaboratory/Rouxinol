#define _USE_MATH_DEFINES 
#include<iomanip> 
#include<cmath>  
#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<bitset>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<queue>
#include<deque>
#include<stack>
using namespace std;
typedef long long ll;
#define repi(i,a,b) for(ll i = (ll)(a) ; i < (ll)(b) ; i++)
#define repd(i,a,b) for(ll i = (ll)(a) ; i > (ll)(b) ; i--)
#define rd(x) cin >> x
#define wr(x)  cout << x
#define wrln(x) cout << x << endl
#define wl() cout << endl
const ll MAX_10p5 = 100010;
const ll MAX_10p9 = 1000000010;
const ll MAX_10p18 = 1000000000000000010;
const ll MOD = 1000000007;
const ll m4x[4] = { 1,0,-1,0 };
const ll m4y[4] = { 0,1,0,-1 };
const ll m8x[8] = { 1,1,0,-1,-1,-1,0,1 };
const ll m8y[8] = { 0,1,1,1,0,-1,-1,-1 };
const ll m9x[9] = { 1,1,0,-1,-1,-1,0,1,0 };
const ll m9y[9] = { 0,1,1,1,0,-1,-1,-1,0 };

struct edge {
	ll from, to, cost;
	bool operator<(const edge& right) const {
		return cost < right.cost;
	}
};
struct point {
	ll x, y;
	bool operator<(const point& right) const {
		return x == right.x ? y < right.y : x < right.x;
	}
};

///////////////////////////////////////////////////////////////////////////////////////

int main() {
	while (1) {
		ll N, M, ans = 0;
		cin >> N >> M;
		ll hsum[1550], wsum[1550];
		hsum[0] = wsum[0] = 0;
		unordered_map<ll, ll> um;
		if (N == 0 && M == 0) break;
		repi(i, 0, N) {
			ll h;
			rd(h);
			hsum[i + 1] = h + hsum[i];
		}

		repi(i, 0, M) {
			ll w;
			rd(w);
			wsum[i + 1] = w + wsum[i];
		}

		repi(i, 0, N) {
			repi(j, i + 1, N + 1) {
				ll d = hsum[j] - hsum[i];
				if (um.find(d) == um.end()) um[d] = 1;
				else um[d]++;
			}
		}

		repi(i, 0, M) {
			repi(j, i + 1, M + 1) {
				ll d = wsum[j] - wsum[i];
				if (um.find(d) != um.end()) {
					ans += um[d];
				}
			}
		}
		wrln(ans);
	}
	return 0;
}

