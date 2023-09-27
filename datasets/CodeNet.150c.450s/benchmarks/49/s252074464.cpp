#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef complex<double> Point;

#define PI acos(-1.0)
#define EPS 1e-10
const ll INF = 1e16;
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

ll n;

int main(){
	while(cin >> n && n){
		vector<ll> v(n);
		rep(i,n)cin >> v[i];
		sort(ALL(v));
		ll ans = 0;
		FOR(i,1,n-1)ans += v[i];
		cout << ans / (n-2) << endl;
	}
}
