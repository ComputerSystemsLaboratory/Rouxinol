#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

vector<vector<int>> g;
int visit_cnt;
vector<int> parent;

void bfs(int s) {
    queue<int> que;
    set<int> visited;

    que.push(s);
    visited.insert(s);
    visit_cnt = 1;

    while (!que.empty()) {
        int u = que.front();
        que.pop();

        for (int v: g[u]) {
            if (!visited.count(v)) {
                parent[v] = u;
                visited.insert(v);
                que.push(v);
                ++visit_cnt; 
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    g.resize(n + 1);
    parent.resize(n + 1);

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        g[u].emplace_back(v);
        g[v].emplace_back(u);
    }

    bfs(1);

    if (visit_cnt < n) {
        cout << "No\n";
    } else {
        cout << "Yes\n";
        for (int i = 2; i <= n; ++i) {
            cout << parent[i] << "\n";
        }
    }

    return 0;
}