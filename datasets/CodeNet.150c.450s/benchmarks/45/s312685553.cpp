#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define per(i, a, b) for (int i = b - 1; i >= a; i--)
#define int long long
using pint = pair<int, int>;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int dxx[8] = {1, 1, 1, 0, 0, -1, -1, -1}, dyy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

const int mod = 1e9 + 7;
int modpow (int n, int m) {
    int ans = 1;
    while (n > 0) {
        if (n & 1) ans = ans * m % mod;
        m = m * m % mod;
        n >>= 1;
    }
    return ans;
}

signed main() {
    int n, m;
    cin >> m >> n;
    cout << modpow (n, m) << "\n";
}
