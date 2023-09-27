#include<bits/stdc++.h>
using namespace std;

vector<int> d, f;
vector<vector<int>> edge;
int t = 0;

void dfs(int s) {
    d[s] = ++t;
    for (int u : edge[s]) {
        if (d[u] == -1)
            dfs(u);
    }
    f[s] = ++t;
}

int main() {
    int n;
    cin >> n;
    d.resize(n, -1);
    f.resize(n);
    edge.resize(n);
    for (int i = 0; i < n; ++i) {
        int id, k;
        cin >> id >> k;
        if (id != i + 1) exit(1);
        if (!k) continue;

        edge[i].resize(k);
        for (int j = 0; j < k; ++j) {
            cin >> edge[i][j];
            --edge[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        if (d[i] == -1)
            dfs(i);

        cout << (i + 1) << " " << d[i] << " " << f[i] << "\n";
    }
    return 0;
}