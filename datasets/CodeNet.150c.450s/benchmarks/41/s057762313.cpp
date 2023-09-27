#include <iostream>
#include <climits>
#include <algorithm>

// namespace
using namespace std;

int main() {
    long long dist[105][105];
    for (int i = 0; i < 105; ++i)  {
        for (int j = 0; j < 105; ++j) {
            dist[i][j] = INT_MAX;
            if (i == j) dist[i][j] = 0;
        }
    }
    int v, e, s, t, d;
    cin >> v >> e;
    for (int i = 0; i < e; ++i) {
        cin >> s >> t >> d;
        dist[s][t] = d;
    }

    // cout << " debug1" << endl;
    for (int k = 0; k < v; ++k) {
        for (int i = 0; i < v; ++i) {
            for (int j = 0; j < v; ++j) {
                // cout << i << " " << k  << " " << j << endl;
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    // cout << " debug2" << endl;

    for (int i = 0; i < v; ++i) {
        if (dist[i][i] < 0) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }
    // cout << " debug3" << endl;
    for (int i = 0; i < v; ++i) {
        for (int j = 0; j < v; ++j) {
            if (dist[i][j] == INT_MAX) cout << "INF" << (j != v - 1 ? " " : "");
            else cout << dist[i][j] << (j != v - 1 ? " " : "");
        }
        cout << endl;
    }
    return 0;
}

