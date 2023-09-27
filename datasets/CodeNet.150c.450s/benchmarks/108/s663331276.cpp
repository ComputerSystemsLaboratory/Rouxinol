#include <iostream>
#include <vector>
#include <queue>
using namespace std;

using Graph = vector<vector<int> >;

void bfs(const Graph &G, vector<int> &dist, int start) {
    dist[start] = 0;
    queue<int> q;
    q.push(start);
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int i = 0; i < (int)G[v].size(); i++) {
            int next_v = G[v][i];
            if (dist[next_v] != -1) continue;
            dist[next_v] = dist[v] + 1;
            q.push(next_v);
        }
    }
}

void print(vector<int> &dist, int n) {
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " " << dist[i] << endl;
    }
}

int main() {
    int n;
    cin >> n;
    Graph G(n);
    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        u--;
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            v--;
            G[u].push_back(v);
        }
    }

    vector<int> dist(n, -1);

    bfs(G, dist, 0);

    print(dist, n);

    return 0;
}
