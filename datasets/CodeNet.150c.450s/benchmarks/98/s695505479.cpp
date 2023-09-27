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

int n, m;
int a[1000];
int b[1000];

int main() {
	while (cin >> n >> m&&n + m) {
		int suma = 0, sumb = 0;
		rep(i, n) {
			cin >> a[i];
			suma +=a[i];
		}
		rep(i, m) {
			cin >> b[i];
			sumb += b[i];
		}
		ll sum = INF;
		ll ansa = -1, ansb = -1;
		rep(i, n) {
			rep(j, m) {
				if (suma - a[i] + b[j] == sumb - b[j] + a[i]) {
					if (sum > a[i] + b[j]) {
						sum = a[i] + b[j];
						ansa = a[i];
						ansb = b[j];
					}
				}
			}
		}
		if (ansa == -1)cout << -1 << endl;
		else cout << ansa << " " << ansb << endl;
	}
}
