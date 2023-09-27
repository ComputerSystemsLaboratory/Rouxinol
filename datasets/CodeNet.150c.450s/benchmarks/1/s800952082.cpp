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

using namespace std;

typedef long long ll;
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

//int n;
//int a[100100];
//int dp[100100];
////dp[i]:?????????a[i]????????£????????????????¢??????¨???????????????
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//		dp[i] = 1;
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < i; j++) {
//			if (a[j] < a[i]) {
//				dp[i] = max(dp[i], dp[j] + 1);
//			}
//		}
//	}
//	int ans = 0;
//	for (int i = 0; i < n; i++) {
//		ans = max(ans, dp[i]);
//	}
//	cout << ans << endl;
//}

const int inf = 1001000000;
int n;
int a[100100];
int dp[100100];
//dp[i]:???????¢??????¨?????????i???????????°??????????°????

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		dp[i] =inf;
	}
	for (int i = 0; i < n; i++) {
		auto it = lower_bound(dp, dp + n, a[i]);
		*it = a[i];
	}
	int ans = lower_bound(dp, dp + n, inf) - dp;
	cout << ans << endl;
}