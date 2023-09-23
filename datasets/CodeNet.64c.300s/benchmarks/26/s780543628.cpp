#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;

ll pow(ll m, ll n) {
    ll ret = 1;
    while (n > 0) {
        if (n & 1) ret = ret * m % MOD;
        m = m * m % MOD;
        n >>= 1;
    }
    return ret;
}

int main() {
    ll m, n;
    cin >> m >> n;

    cout << pow(m, n) << endl;

    return 0;
}
