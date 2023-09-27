#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define FOR(i,a,n) for(int i=(a); i<(n); i++)
#define all(v) v.begin(), v.end()
#define fi first
#define se second
using namespace std;
using ll = long long;
using P = pair<int ,int>;
const int INF = 1e9;
const int MOD = 1e9+7;

ll modpow(ll x, ll n, ll mod) {
    ll res = 1;
    while (n) {
        if (n & 1) res = (res * x) % mod; // bitが立っていればxを掛ける
        x = (x * x) % mod; // x を二乗しておく
        n >>= 1; // 右bitシフト（log2）
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
    cout << modpow(n, m, MOD) << endl;
}
