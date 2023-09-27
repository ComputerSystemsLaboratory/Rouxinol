#include <bits/stdc++.h>
using namespace std;

//#define int long long
typedef long long ll;

typedef unsigned long long ul;
typedef unsigned int ui;
const ll mod = 1000000007;
const ll INF = mod * mod;
const int INF_N = 1e+9;
typedef pair<int, int> P;
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
//typedef vector<vector<ll>> mat;
typedef vector<int> vec;

//繰り返し二乗法
ll mod_pow(ll a, ll n, ll m) {
	ll res = 1;
	while (n) {
		if (n & 1)res = res * a%m;
		a = a * a%m; n >>= 1;
	}
	return res;
}

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

//逆元(Eucledean algorithm)
ll inv(ll a, ll p) {
	return (a == 1 ? 1 : (1 - p * inv(p%a, a)) / a + p);
}
modint operator/(modint a, modint b) { return a * modint(inv(b, mod)); }

const int max_n = 1 << 18;
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
using mP = pair<modint, modint>;

int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };




void solve() {
    int H;
    vector<vec> a;
    while(cin >> H, H){
        int res = 0;
        a.resize(H, vec(5, 0));
        rep(i, H)rep(j, 5) cin >> a[i][j];
        while(1){
            bool f = true;
            per(i, H){
                unordered_map<int, int> m;
                rep(j, 5){
                    m[a[i][j]]++;
                }
                int tmp=0;
                for(auto au: m){
                    if(au.first == 0 && au.second >= 3) break;
                    if(au.second == 5){
                        f = false;
                        res += au.first * au.second;
                        tmp = au.first;
                        rep(j, 5){
                            a[i][j] = 0;
                        }
                    }else if(au.second == 4){
                        if(a[i][0] == a[i][1] && a[i][1] == a[i][3] && a[i][3] == a[i][4]) break;
                        if(a[i][1] == a[i][3]){
                            f = false;
                            res += au.first * au.second;
                            rep(j, 5){
                                if(a[i][j] == au.first) a[i][j] = 0;
                            }
                        }else{
                            if(a[i][1] == au.first){
                                f=false;
                                res += au.first * 3;
                                rep(j, 3){
                                    a[i][j] = 0;
                                }
                            }else{
                                f=false;
                                res += au.first * 3;
                                Rep(j, 2, 5){
                                    a[i][j] = 0;
                                }
                            }
                        }
                    }else if(au.second == 3){
                        if(a[i][0] == a[i][1] && a[i][1] == a[i][2]){
                            f=false;
                            res += au.first * 3;
                            rep(j, 3){
                                a[i][j] = 0;
                            }
                        }else if(a[i][1] == a[i][2] && a[i][2] == a[i][3]){
                            f=false;
                            res += au.first * 3;
                            Rep(j, 1, 4){
                                a[i][j] = 0;
                            }
                        }else if(a[i][2] == a[i][3] && a[i][3] == a[i][4]){
                            f=false;
                            res += au.first * 3;
                            Rep(j, 2, 5){
                                a[i][j] = 0;
                            }
                        }
                    }
                }
                // rep(j, 5){
                //     if(a[i][j] == tmp){
                //         a[i][j] = 0;
                //     }
                // }
            }
            if(f) break;
            int cnt = 0;
            while(1){
                per(i, H){
                    if(i == 0) continue;
                    rep(j, 5){
                        if(a[i][j] == 0){
                            a[i][j] = a[i-1][j];
                            a[i-1][j] = 0;
                        }
                    }
                }
                if(++cnt >= 10) break;
            }
        }
        cout << res << endl;
    }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //cout << fixed << setprecision(10);
  //init_f();
  //init();
  //int t; cin >> t; rep(i, t)solve();
  solve();
//   stop
    return 0;
}

