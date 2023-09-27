#include <bits/stdc++.h>

#define rep(i, a, b) for (int i = a; i < (int)(b); ++i)
#define rrep(i, a, b) for (int i = b - 1; i >= (int)(a); --i)

using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;

constexpr int MOD = 1000000007;

void warshal_floyd(vvi& G) {
    int v = G.size();
    rep(i, 0, v) { G[i][i] = 0; }
    rep(k, 0, v) {
        rep(i, 0, v) {
            if (G[i][k] == INT_MAX) { continue; }
            rep(j, 0, v) {
                if (G[k][j] == INT_MAX) { continue; }
                G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
            }
        }
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int v, e;
    cin >> v >> e;

    vvi G(v, vi(v, INT_MAX));
    rep(i, 0, e) {
        int s, t, d;
        cin >> s >> t >> d;
        G[s][t] = d;
    }
    warshal_floyd(G);

    rep(i, 0, v) {
        if (G[i][i] < 0) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    rep(i, 0, v) {
        rep(j, 0, v) {
            if (G[i][j] == INT_MAX) {
                cout << "INF";
            } else {
                cout << G[i][j];
            }
            if (j != v - 1) {
                cout << " ";
            } else {
                cout << endl;
            }
        }
    }

    return 0;
}
