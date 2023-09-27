#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const int inf = 1e9;
#define rep(i, n) for (int i = 0; i < n; i++)
using Graph = vector<vector<int>>;
using pint = pair<int, int>;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int dxx[8] = {1, 1, 1, 0, 0, -1, -1, -1}, dyy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int n;
const int MAX = 100;
int g[MAX][MAX];

int prim() {
    int u, minv;
    int d[MAX], p[MAX];
    bool seen[MAX] = {};
    rep (i, n) {
        d[i] = inf;
        p[i] = -1;
    }
    d[0] = 0;
    while (1) {
        minv = inf;
        u = -1;
        rep (v, n) {
            if (!seen[v] && minv > d[v]) {
                u = v;
                minv = d[v];
            }
        }
        if (u == -1) break;
        seen[u] = 1;
        rep (i, n) {
            if (!seen[i] && g[u][i] != -1) {
                if (d[i] > g[u][i]) {
                    d[i] = g[u][i];
                    p[i] = u;
                }
            }
        }
    }
    int sum = 0;
    rep (i, n) sum += d[i];
    // rep (i, n) cout << d[i] << " ";
    return sum;
}

int main() {
    cin >> n;
    rep (i, n) rep (j, n) cin >> g[i][j];
    // cout << prim << "\n";
    cout << prim() << "\n";
}

