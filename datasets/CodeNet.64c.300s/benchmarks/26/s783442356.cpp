#include "bits/stdc++.h"
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

using ll = long long;

int main() {
    ll m, n, ans = 1, MOD = 1e9 + 7;
    cin >> m >> n;
    while (n > 0) {
        if (n & 1) ans = (ans * m) % MOD;
        n /= 2;
        m = (m * m) % MOD;
    }
    cout << ans << "\n";
}
