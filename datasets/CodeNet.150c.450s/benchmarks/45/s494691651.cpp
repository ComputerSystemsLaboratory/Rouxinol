#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pl;
#define vi vector<int>
#define vl vector<long long>
#define vvi vector< vector<int> >
#define vvl vector< vector<ll> >
#define vp vector<P>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REPD(i, n) for (int i = (int)(n-1); i >= 0; i--)
#define FOR(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define FORD(i, a, b) for (int i = (int)(a); i >= (int)(b); i--)
#define INF 1e18
#define INFTY 1e9
const int mod = 1000000007;
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

template<class T> bool chmax(T &a, const T & b) {
    if (a<b) {
        a = b;
        return true;
    }
    return false;
}

template<class T> bool chmin(T &a, const T & b) {
    if (a>b) {
        a = b;
        return true;
    }
    return false;
}

//cout << fixed << setprecision(10) << y << endl;
struct edge {int to, cost;};
vector< vector<edge> > es;

int gcd(int a, int b) {
    int r = a % b;
    if (r == 0) return b;
    return gcd(b, r);
}

ll lcm(ll a, ll b) {
    return a/gcd(a, b)*b;
}

const int MAX = 1000010;
ll fac[MAX], inv[MAX], finv[MAX]; 

void COMinit() {
    fac[0] = fac[1] = 1;
    inv[1] = 1;
    finv[0] = finv[1] = 1;
    FOR(i, 2, MAX) {
        fac[i] = fac[i-1] * i % mod;
        inv[i] = mod - inv[mod % i] * (mod / i) % mod;
        finv[i] = finv[i-1] * inv[i] % mod;
    }
}

ll COM(int n, int r) {
    if (n < r) return 0;
    if (n < 0 || r < 0) return 0;
    return fac[n] * (finv[n-r] * finv[r] % mod) % mod;
}

ll modpow(ll m, ll n) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) {
            res = res * m % mod;
        }
        m = m * m % mod;
        n >>= 1;
    }
    return res;
}
int main() {
    ll n, m;
    cin >> m >> n;
    ll res = modpow(m, n);
    cout << res << endl;
    return 0;
}
