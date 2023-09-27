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

#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define rep(i,N) for(ll i=0;i<(N);i++)
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

ll h;
ll num[11][6];

int main() {
	while (cin >> h&&h) {
		ll ans = 0;
		rep(i, h) {
			rep(j, 5)cin >> num[i][j];
		}
		bool f = 1;
		int cnt = 0;
		while (f) {
			f = 0;
			rep(i, h) {
				ll add = 0;
				ll lb = -1, ub = -1;
				rep(j, 3) {
					FOR(k, j + 2, 5) {
						FOR(l, j, k + 1) {
							if (num[i][j] != num[i][l])break;
							if (l == k) {
								if (add < num[i][j] * (k - j + 1)) {
									add = num[i][j] * (k - j + 1);
									lb = j, ub = k;
									f = 1;
								}
							}
						}
					}
				}
				ans += add;
				if (add != 0) {
					FOR(j, lb, ub + 1) {
						num[i][j] = -1;
					}
				}
			}
			//rep(i, h) {
			//	rep(j, 5)cout << num[i][j] << " ";
			//	cout << endl;
			//}
			//cout << endl;
			rep(j, 5) {
				vector<ll> n;
				rep(i, h) {
					if (num[i][j] != -1)n.push_back(num[i][j]);
				}
				rep(i, h - n.size())num[i][j] = -1;
				rep(i, n.size())num[h - n.size() + i][j] = n[i];
			}
			//rep(i, h) {
			//	rep(j, 5)cout << num[i][j] << " ";
			//	cout << endl;
			//}
			//cout << endl;
			//if (cnt == 2)break;
		}
		cout << ans << endl;
	}
}
