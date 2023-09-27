#include <bits/stdc++.h>
using namespace std;

struct Graph {
    vector<vector<int>> adj;
    vector<int> color;
    int colorID;
    Graph(int n) {
        adj.assign(n, vector<int>());
        color.assign(n, -1);
        colorID = 0;
    }
};

void dfs(Graph& g, int u, int colorID)
{
    g.color[u] = colorID;
    for (auto v : g.adj[u]) {
        if (g.color[v] == -1) {
            g.color[v] = colorID;
            dfs(g, v, colorID);
        }
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    Graph g(n);
    for (int i = 0; i < k; i++) {
        int u, v;
        cin >> u >> v;
        g.adj[u].push_back(v);
        g.adj[v].push_back(u);
    }

    for (int u = 0; u < n; u++) {
        if (g.color[u] == -1) {
            dfs(g, u, g.colorID++);
        }
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int u, v;
        cin >> u >> v;
        if (g.color[u] == g.color[v]) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}

