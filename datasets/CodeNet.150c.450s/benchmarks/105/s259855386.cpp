#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
#include<bitset>
#include<stack>
#include<unordered_map>
#include<utility>
#include<cassert>
#include<complex>
#include<numeric>
using namespace std;

//#define int long long
typedef long long ll;

typedef unsigned long long ul;
typedef unsigned int ui;
constexpr ll mod = 1000000007;
const ll INF = mod * mod;
typedef pair<int, int>P;
#define stop char nyaa;cin>>nyaa;
#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define Rep(i,sta,n) for(int i=sta;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per1(i,n) for(int i=n;i>=1;i--)
#define Rep1(i,sta,n) for(int i=sta;i<=n;i++)
#define all(v) (v).begin(),(v).end()
typedef pair<ll, ll> LP;
typedef long double ld;
typedef pair<ld, ld> LDP;
const ld eps = 1e-12;
const ld pi = acos(-1.0);


struct modint {
	ll n;
	modint() :n(0) { ; }
	modint(ll m) :n(m) {
		if (n >= mod)n %= mod;
		else if (n < 0)n = (n%mod + mod) % mod;
	}
	operator int() { return n; }
};
bool operator==(modint a, modint b) { return a.n == b.n; }
modint operator+=(modint &a, modint b) { a.n += b.n; if (a.n >= mod)a.n -= mod; return a; }
modint operator-=(modint &a, modint b) { a.n -= b.n; if (a.n < 0)a.n += mod; return a; }
modint operator*=(modint &a, modint b) { a.n = ((ll)a.n*b.n) % mod; return a; }
modint operator+(modint a, modint b) { return a += b; }
modint operator-(modint a, modint b) { return a -= b; }
modint operator*(modint a, modint b) { return a *= b; }
modint operator^(modint a, int n) {
	if (n == 0)return modint(1);
	modint res = (a*a) ^ (n / 2);
	if (n % 2)res = res * a;
	return res;
}

ll inv(ll a, ll p) {
	return (a == 1 ? 1 : (1 - p * inv(p%a, a)) / a + p);
}
modint operator/(modint a, modint b) { return a * modint(inv(b, mod)); }

const int max_n = 1 << 19;
modint fact[max_n], factinv[max_n];
void init_f() {
	fact[0] = modint(1);
	for (int i = 0; i < max_n - 1; i++) {
		fact[i + 1] = fact[i] * modint(i + 1);
	}
	factinv[max_n - 1] = modint(1) / fact[max_n - 1];
	for (int i = max_n - 2; i >= 0; i--) {
		factinv[i] = factinv[i + 1] * modint(i + 1);
	}
}
modint comb(int a, int b) {
	if (a < 0 || b < 0 || a < b)return 0;
	return fact[a] * factinv[b] * factinv[a - b];
}

typedef vector<int> vec;
typedef vector<vec> mat;
//bit.ver
//rankを返す
int Gaussian_elimination(mat &A) {
	if (A.empty())return 0;
	int n = A.size(); int m = A[0].size();
	int le = 0;
	rep(j, m) {
		Rep(i, le, n) {
			if (A[i][j]) {
				swap(A[le], A[i]);
				Rep(i2, le + 1, n) {
					if (A[i2][j]) {
						rep(k, m) {
							A[i2][k] ^= A[le][k];
						}
					}
				}
				le++; break;
			}
		}
	}
	return le;
}

bool can(mat &A, vec v) {
	int n = A.size();
	rep(j, 60) {
		if (v[j] == 0)continue;
		per(i, n) {
			if (A[i][j]) {
				rep(k, 60) {
					v[k] ^= A[i][k];
				}
				break;
			}
		}
	}
	rep(j, 60)if (v[j])return false;
	return true;
}
void solve() {
	int n; cin >> n;
	vector<ll> a(n);
	rep(i, n)cin >> a[i];
	string s; cin >> s;
	mat A;
	per(i, n) {
		vec c(60,0);
		rep(j, 60) {
			if (a[i] & (1ll << j))c[j] = 1;
		}
		if (s[i] == '0') {
			A.push_back(c);
		}
		else {
			Gaussian_elimination(A);
			if (!can(A, c)) {
				cout << 1 << "\n"; return;
			}
		}
	}
	cout << 0 << "\n";
}


signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	//cout << fixed << setprecision(10);
	//init_f();
	//init();
	int t; cin >> t;rep(i,t)
	solve();
	stop
		return 0;
}