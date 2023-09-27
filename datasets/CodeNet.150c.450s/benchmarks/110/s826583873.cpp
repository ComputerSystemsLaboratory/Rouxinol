# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
# include <stack>
# include <queue>
# include <list>
# include <bitset>
# include <complex>
#include<limits.h>
#include<unordered_map>
#include<unordered_set>
#include<deque>
#include<cstdio>
using namespace std;
typedef long long int ll;
const int N = 1000000;
const int mod = 1000000007;
const int INF = 1 << 30;
#define rep(i,n) for(ll i=(ll)0;i<(ll)n;++i)
#define ALL(x) x.begin(),x.end()
#define pp pair<ll,ll>
#define fi first
#define se second
#define pb push_back
ll ppow(ll x, ll n) {
	ll ans = 1;
	while (n > 0) {
		if ((n & 1) == 1)ans = ans * x;
		x = x * x;
		n >>= 1;
		x %= mod;
		ans %= mod;
	}
	return ans;
}
string YN(bool b) { return(b ? "YES" : "NO"); }
string yn(bool b) { return(b ? "Yes" : "No"); }
ll sz, fact[N], inv[N];
void setinv() {
	fact[0] = 1; inv[0] = 1;
	for (int i = 1; i <= sz; i++) {
		fact[i] = (fact[i - 1] * i) % mod;  //階乗を求める
		inv[i] = ppow(fact[i], (ll)mod - 2) % mod; // フェルマーの小定理で逆元を求める
	}
}
ll conv(ll r) {//nCr
	return fact[sz] * inv[r] % mod * inv[sz - r] % mod;
}
int d[1000][1000];
void reset() {
	rep(i, 1000)rep(j, 1000)d[i][j] = INF;
}
int main() {
	int h, w, n;
	pp s, g, pos[10];
	cin >> h >> w >> n;
	char m[1010][1010];
	rep(i, h)rep(j, w) {
		cin >> m[i][j];
		if (m[i][j] == 'S')pos[0] = pp{ i,j };
		if (m[i][j] == char('0' + n - 1))g = pp{ i,j };
		if (m[i][j] >= '0'&&m[i][j] <= '9')pos[m[i][j] - '0'] = pp{ i,j };
	}
	int ans = 0;
	rep(i, n) {
		reset();
		queue<pp>q; q.push(pos[i]);
		d[pos[i].fi][pos[i].se] = 0;
		while (!q.empty()) {
			pp p = q.front(); q.pop();
			if (p == pos[i + 1]) { ans += d[p.fi][p.se]; break; }
			if (p.fi > 0 && m[p.fi - 1][p.se] != 'X'&&d[p.fi - 1][p.se] == INF) { q.push(pp{ p.fi - 1,p.se }); d[p.fi - 1][p.se] = d[p.fi][p.se] + 1; }
			if (p.fi < h - 1 && m[p.fi + 1][p.se] != 'X'&&d[p.fi + 1][p.se] == INF) { q.push(pp{ p.fi + 1,p.se }); d[p.fi + 1][p.se] = d[p.fi][p.se] + 1; }
			if (p.se > 0 && m[p.fi][p.se - 1] != 'X'&&d[p.fi][p.se - 1] == INF) { q.push(pp{ p.fi,p.se - 1 }); d[p.fi][p.se - 1] = d[p.fi][p.se] + 1; }
			if (p.se < w - 1 && m[p.fi][p.se+1] != 'X'&&d[p.fi][p.se+1] == INF) { q.push(pp{ p.fi,p.se+1 }); d[p.fi][p.se+1] = d[p.fi][p.se] + 1; }
		}
	}
	cout << ans << endl;
}
