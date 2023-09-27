#include <bits/stdc++.h>
using namespace std;

#define NIL -1

void dfs(int r, int id, vector<vector<int>> &G, vector<int> &color) {
    stack<int> S;
    S.push(r);

    color[r] = id;
    while (!S.empty()) {
        int u = S.top();
        S.pop();

        for (int i = 0; i < G[u].size(); i++) {
            int v = G[u][i];
            if (color[v] == NIL) {
                color[v] = id;
                S.push(v);
            }
        }
    }
}

void assignColor(vector<vector<int>> &G, vector<int> &color) {
    int id = 1;

    for (int i = 0; i < G.size(); i++)
        color[i] = NIL;

    for (int u = 0; u < G.size(); u++) {
        if (color[u] == NIL) {
            dfs(u, id, G, color);
            id++;
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> G(n);
    vector<int> color(n);

    int s, t;
    for (int i = 0; i < m; i++)
    {
        cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }

    // グループ分け
    assignColor(G, color);

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> s >> t;
        if (color[s] == color[t]) {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}
