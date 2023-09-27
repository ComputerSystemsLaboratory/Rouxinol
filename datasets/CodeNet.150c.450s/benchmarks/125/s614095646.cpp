#include <iostream>
using namespace std;

int N;
int G[101][101];
int visited[101];

int start[101], complete[101];

int dfs(int v, int t) {
    visited[v] = 1;
    start[v] = t;
    int nt = t+1;
    for (int j = 0; j <= N; ++j) {
        if (!visited[j] && G[v][j]) {
            nt = dfs(j, nt);
        }
    }
    complete[v] = nt;
    return nt+1;
}

int main() {
    cin >> N;
    for (int j = 0; j <= N; ++j) for (int k = 0; k <= N; ++k) G[j][k] = 0;
    for (int j = 0; j <= N; ++j) visited[j] = 0;
    for (int _ = 0; _ < N; ++_) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; ++j) {
            int v; cin >> v;
            G[u][v] = 1;
        }
    }

    int tt = 1;
    for (int j = 1; j <= N; ++j) {
        if (!visited[j]) tt = dfs(j, tt);
    }

    for (int j = 1; j <= N; ++j) {
        cout << j << " " << start[j] << " " << complete[j] << endl;
    }

    return 0;
}