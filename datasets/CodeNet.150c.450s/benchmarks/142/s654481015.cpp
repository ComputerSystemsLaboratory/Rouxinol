#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ALL(v) (v).begin(), (v).end()
using ll = long long;
constexpr int INF = 1e9;
constexpr long long LINF = 1e18;
constexpr long long MOD = 1e9 + 7;

signed main() {
    int n, k;
    cin >> n >> k;
    ll a[n];
    rep(i, n) {
        cin >> a[i];
    }
    rep(i, n - k) {
        cout << (a[i] < a[i + k] ? "Yes" : "No") << endl;
    }
    return 0;
}