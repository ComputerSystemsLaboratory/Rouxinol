#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main() {
    int N;
    int G[101][101];

    cin >> N;
    for (int j = 0; j <= N; ++j) for (int k = 0; k <= N; ++k) G[j][k] = 0;
    for (int _ = 0; _ < N; ++_) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; ++j) {
            int v; cin >> v;
            G[u][v] = 1;
        }
    }

    int min_dist[101];
    for (int j = 0; j <= N; ++j) min_dist[j] = -1;

    queue<int> que;
    que.push(1); min_dist[1] = 0;
    while (!que.empty()) {
        int v = que.front(); que.pop();

        for (int j = 1; j <= N; ++j) {
            if (G[v][j] && min_dist[j] == -1) {
                min_dist[j] = min_dist[v]+1;
                que.push(j);
            }
        }
    }

    for (int j = 1; j <= N; ++j) {
        cout << j << " " << min_dist[j] << endl;
    }

    return 0;
}