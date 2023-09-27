#include <bits/stdc++.h>

#define M_PI       3.14159265358979323846   // pi

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> VI;
typedef pair<ll, ll> P;
typedef tuple<ll, ll, ll> t3;
typedef tuple<ll, ll, ll, ll> t4;
typedef tuple<ll, ll, ll, ll, ll> t5;

#define rep(a,n) for(ll a = 0;a < n;a++)
#define repi(a,b,n) for(ll a = b;a < n;a++)

using namespace std;

static const ll INF = 1e15;

template<typename T>
static inline void chmin(T & ref, const T  value) {
    if (ref > value) ref = value;
}

template<typename T>
static inline void chmax(T & ref, const T value) {
    if (ref < value) ref = value;
}

ll dp[1000001];
int n;
vector<ll> a;

void solve() {
    fill(dp, dp + n, INF);
    for (int i = 0; i < n; ++i) {
        *lower_bound(dp, dp + n, a[i]) = a[i];
    }
    cout << lower_bound(dp, dp + n, INF) - dp << endl;
}

int main() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    solve();
}


