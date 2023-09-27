#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
int color[N];
vector<int> G[N];

void dfs(int u, int c) {
    color[u] = c;
    for (int i = 0; i < G[u].size(); i++) {
        int v = G[u][i];
        if (color[v] == -1) dfs(v, c);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int s, t;
        cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }

    memset(color, -1, sizeof(color));
    int c = 0;
    for (int u = 0; u < n; u++) {
        if (color[u] == -1) {
            dfs(u, c);
            c++;
        }
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int s, t;
        cin >> s >> t;
        if (color[s] == color[t]) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
