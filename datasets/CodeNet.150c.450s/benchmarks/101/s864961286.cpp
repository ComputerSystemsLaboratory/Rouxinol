#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

void dfs(const vvi &to, vi &id, int u, int val) {
    id[u] = val;
    for (int v: to[u]) {
        if (id[v] < 0) dfs(to, id, v, val);
    }
};

int main() {
    int n, m, s, t, q, u, v;
    cin >> n >> m;
    vvi to(n);
    for (int i=0; i<m; ++i) {
        cin >> s >> t;
        to[s].push_back(t);
        to[t].push_back(s);
    }
    vi id(n, -1);
    for (int i=0; i<n; ++i) {
        if (id[i] < 0) dfs(to, id, i, i);
    }
    cin >> q;
    for (int i=0; i<q; ++i) {
        cin >> u >> v;
        cout << (id[u] == id[v] ? "yes" : "no") << endl;
    }
    return 0;
}
