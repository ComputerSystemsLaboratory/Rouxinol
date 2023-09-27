#include <bits/stdc++.h>

#define rep(i, a, b) for (int i = a; i < (int)(b); ++i)
#define rrep(i, a, b) for (int i = b - 1; i >= (int)(a); --i)

using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vvi g(n, vi(n, INT_MAX));

    rep(i, 0, n) {
        int u, k;
        cin >> u >> k;

        rep(j, 0, k) {
            int v, c;
            cin >> v >> c;
            g[u][v] = c;
        }
    }

    vector<bool> seen(n, false);
    vi ds(n, INT_MAX);

    ds[0] = 0;

    while (true) {
        int minv = INT_MAX;
        int u = -1;

        rep(i, 0, n) {
            if (!seen[i] && ds[i] < minv) {
                minv = ds[i];
                u = i;
            }
        }
        if (u == -1) { break; }
        seen[u] = true;

        rep(v, 0, n) {
            if (!seen[v] && g[u][v] != INT_MAX && ds[v] > minv + g[u][v]) {
                ds[v] = minv + g[u][v];
            }
        }
    }

    rep(i, 0, n) {
        cout << i << " " << ds[i] << endl;
    }

    return 0;
}
