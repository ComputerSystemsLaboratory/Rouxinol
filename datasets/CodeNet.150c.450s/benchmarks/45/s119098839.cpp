#include <bits/stdc++.h>

#define EPS (1e-10)
#define rep(i, a, b) for (int i = a; i < (int)(b); ++i)
#define rrep(i, a, b) for (int i = b - 1; i >= (int)(a); --i)

using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vd = vector<double>;
using vvi = vector<vi>;

constexpr int MOD = 1000000007;

ll mpow(ll m, ll n) {
    if (n == 0) { return 1; }
    if (n % 2 == 1) { return (m * mpow(m, n - 1)) % MOD; }
    ll sub = mpow(m, n / 2);
    return (sub * sub) % MOD;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int m, n;
    cin >> m >> n;
    cout << mpow(m, n) << endl;

    return 0;
}
