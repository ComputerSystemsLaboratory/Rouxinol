#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define ROF(i, a, b) for (int i = a; i >= b; i--)
using namespace std;

using pii = pair<int, int>; using vpii = vector<pii>;
using vi = vector<int>; using vvi = vector<vi>;
using ll = long long;
using pll = pair<ll, ll>; using vpll = vector<pll>;
using vll = vector<ll>; using vvll = vector<vll>;

int main() {
    int n, m; cin >> n >> m;
    vvi e(n + 1);
    FOR(i, 1, m) {
        int u, v; cin >> u >> v;
        e[u].pb(v); e[v].pb(u);
    }
    vi bt(n + 1), vis(n + 1);
    queue <int> q;
    q.push(1); vis[1] = 1;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : e[u]) {
            if (!vis[v]) {
                vis[v] = 1, bt[v] = u;
                q.push(v);
            }
        }
    }
    FOR(i, 1, n) {
        if (!vis[i]) {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    FOR(i, 2, n) 
        cout << bt[i] << endl;
}