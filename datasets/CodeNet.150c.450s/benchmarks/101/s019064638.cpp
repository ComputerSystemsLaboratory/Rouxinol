//Connected Component
#include <iostream>
#include <vector>

using namespace std;

static const int N = 100000;
int n, colors[N] = {};

void dfs(vector<vector<int>>  &G, int u, int c) {
    if(colors[u] != -1) return;
    colors[u] = c;
    for(auto v: G[u]) {
        dfs(G, v, c);
    }
}

int main() {
    int m, s, t, q;
    cin >> n >> m;
    vector<vector<int>> G(n);
    for(int i = 0; i < m; i++) {
        cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }

    for(int i = 0; i < n; i++) colors[i] = -1;
    for(int i = 0; i < n; i++) {
        dfs(G, i, i);
    }

    cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> s >> t;
        if(colors[s] == colors[t]) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}

