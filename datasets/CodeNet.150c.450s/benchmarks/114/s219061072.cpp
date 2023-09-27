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
        rep(j, 0, n) {
            cin >> g[i][j];
            if (g[i][j] == -1) { g[i][j] = INT_MAX; }
        }
    }

    vector<bool> seen(n, false);
    vi d(n, INT_MAX);
    vi p(n, -1);

    d[0] = 0;

    while (true) {
        // Mimimum cost to connect T and V-T.
        int minv = INT_MAX;
        // A vertex in V-T, which has minimum cost.
        int u = -1;

        rep(i, 0, n) {
            if (!seen[i] && minv > d[i]) {
                u = i;
                minv = d[i];
            }
        }
        if (u == -1) { break; }

        // Append u into T.
        seen[u] = true;

        // Calculate minimum distance between u and v in V-T.
        rep(v, 0, n) {
            if (!seen[v] && g[u][v] != INT_MAX) {
                if (d[v] > g[u][v]) {
                    d[v] = g[u][v];
                    p[v] = u;
                }
            }
        }
    }

    int sum = 0;
    rep(i, 0, n) {
        if (p[i] != -1) { sum += g[i][p[i]]; }
    }
    cout << sum << endl;

    return 0;
}
