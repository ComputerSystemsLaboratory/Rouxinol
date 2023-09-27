#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>
#include <fstream>
#include <bitset>
#include <time.h>
#include <tuple>
#include <iomanip>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef complex<double> Point;

#define PI acos(-1.0)
#define EPS 1e-10
const ll INF = 1e12;
const ll MOD = 1e9 + 7;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,N) for(int i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define EQ(a,b) (abs((a)-(b))<EPS)
#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()) )
#define fi first
#define se second
#define N_SIZE (1LL << 20)
#define NIL -1
#define MAX_N 100100

ll sq(ll num) { return num*num; }
ll mod_pow(ll x, ll n) {
	if (n == 0)return 1;
	if (n == 1)return x%MOD;
	ll res = sq(mod_pow(x, n / 2));
	res %= MOD;
	if (n % 2 == 1) {
		res *= x;
		res %= MOD;
	}
	return res;
}
ll mod_add(ll a, ll b) { return (a + b) % MOD; }
ll mod_sub(ll a, ll b) { return (a - b + MOD) % MOD; }
ll mod_mul(ll a, ll b) { return a*b % MOD; }

ll n, m;
ll cnt[2][2000000];
ll h[2000];
ll w[2000];

int main() {
	while (cin >> n >> m&&n + m) {
		rep(i, 2)rep(j, 2000000)cnt[i][j] = 0;
		h[0] = 0;
		w[0] = 0;
		rep(i, n)cin >> h[i + 1];
		rep(i, m)cin >> w[i + 1];
		rep(i, n + 1)h[i] += h[i - 1];
		rep(i, m + 1)w[i] += w[i - 1];
		rep(i, n + 1) {
			FOR(j, i + 1, n + 1) {
				cnt[0][h[j] - h[i]]++;
			}
		}
		rep(i, m + 1) {
			FOR(j, i + 1, m + 1) {
				cnt[1][w[j] - w[i]]++;
			}
		}
		ll ans = 0;
		rep(i, 2000000) {
			ans += (cnt[0][i] * cnt[1][i]);
		}
		cout << ans << endl;
	}
}
