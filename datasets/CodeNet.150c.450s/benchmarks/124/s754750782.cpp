#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>

using namespace std;
using graph = vector<vector<int>>;


int main() {
    int n;
    cin >> n;

    graph G(n, vector<int>(n, -1));
    for (int i = 0; i < n; ++i) {
        int u, k;
        cin >> u >> k;

        for (int j = 0; j < k; ++j) {
            int v, c;
            cin >> v >> c;
            G[u][v] = c;
        }
    }

    // Dijkstra's algorithm
    vector<int> d(n, -1);
    vector<bool> visited(n, false);

    d[0] = 0;
    visited[0] = true;
    while (1) {
        int u = -1;
        int v = -1;
        int minw = numeric_limits<int>::max();
        for (int i = 0; i < n; ++i) {
            if (!visited[i])
                continue;
            for (int j = 0; j < n; ++j) {
                if (G[i][j] < 0)
                    continue;
                int w = G[i][j] + d[i];
                if (!visited[j] && w < minw) {
                    u = i;
                    v = j;
                    minw = w;
                }
            }
        }
        if (v < 0) {
            break;
        }
        d[v] = minw;
        visited[v] = true;
    }

    for (int i = 0; i < n; ++i) {
        cout << i << " " << d[i] << endl;
    }

    return 0;
}