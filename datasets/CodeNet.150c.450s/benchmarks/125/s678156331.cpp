#include <iostream>
#include <vector>
#include <cstring>
#define N 101

using namespace std;

int visited[N], discovery[N], finish[N], tt, n;
vector<int> G[N];

void dfs(int u) {
    visited[u] = 1;
    discovery[u] = ++tt;
    for (int i = 0; i < G[u].size(); i++) {
        if (visited[G[u][i]] == 0) {
            dfs(G[u][i]);
        }
    }
    finish[u] = ++tt;
}

int main() {
    int u, k, v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> u >> k;
        u--;
        for (int j = 0; j < k; j++) {
            cin >> v;
            v--;
            G[u].push_back(v);
        }
    }
    memset(visited, 0, sizeof(visited));
    tt = 0;

    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) {
            dfs(i);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << i + 1 << " " << discovery[i] << " " << finish[i] << endl;
    }

    return 0;
}