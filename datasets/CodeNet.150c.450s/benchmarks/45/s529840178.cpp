#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i < (int)(n); i++)
using ull = unsigned long long;
using ll = long long;

const ll MOD = 1E+9 + 7;

int main() {
    ll M, N;
    cin >> M >> N;

    ll ans = 1, a = M;
    for (ll bit=0; (1LL<<bit) <=N; bit++) {
        if (N & (1LL<<bit)) ans = (ans * a) % MOD;
        a = (a * a) % MOD;
    }

    cout << ans << endl;

    return 0;
}


