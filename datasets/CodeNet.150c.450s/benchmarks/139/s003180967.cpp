#include "bits/stdc++.h"

using namespace std;

const int mx = 2e5 + 9;

int ans[mx];
bitset <mx> mark;
vector <int> adj[mx];

void bfs(int s) {
    mark[s] = 1;
    queue <int> q;
    q.push(s);

    while (!q.empty()) {
        auto u = q.front();
        q.pop();
        for (auto v : adj[u]) {
            if (mark[v]) continue;
            mark[v] = 1;
            ans[v] = u;
            q.push(v);
        }
    }
}

int main() {
    int n, m; cin >> n >> m;
    memset(ans, -1, sizeof ans);
    while (m--) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bfs(1);
    for (int i = 2; i <= n; i++) {
        if (ans[i] == -1) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    for (int i = 2; i <= n; i++) {
        cout << ans[i] << endl;
    }
}
