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
typedef unsigned long long ull;
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

int w, h;
int c[100][100];

int dx[] = { 0,1,1,1,0,-1,-1,-1 };
int dy[] = { 1,1,0,-1,-1,-1,0,1 };

void solve(int y, int x) {
	c[y][x] = 0;
	rep(i, 8) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny >= 0 && ny < h&&nx >= 0 && nx < w) {
			if (c[ny][nx] == 1)solve(ny, nx);
		}
	}
}

int main() {
	while (cin >> w >> h&&w + h) {
		ll ans = 0;
		rep(i, h) {
			rep(j, w) {
				cin >> c[i][j];
			}
		}
		rep(i, h) {
			rep(j, w) {
				if (c[i][j] == 1) {
					ans++;
					solve(i, j);
				}
			}
		}
		cout << ans << endl;
	}
}
