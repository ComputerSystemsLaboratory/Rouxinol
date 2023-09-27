#include <iostream>

using namespace std;
using LL = long long;

const LL INF = 1L << 32;

LL G[101][101];

int main() {

    int V, E;
    cin >> V >> E;

    //
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (i == j) G[i][j] = 0;
            else G[i][j] = INF;
        }
    }

    for (int i = 0; i < E; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        G[s][t] = d;
    }

    //
    bool negative_cycle = false;

    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            if (G[i][k] == INF) continue;
            for (int j = 0; j < V; j++) {
                if (G[k][j] == INF) continue;
                G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
                if (i == j && G[i][j] < 0) {
                    negative_cycle = true;
                    goto outer;
                }
            }
        }
    }
    outer:

    //
    if (negative_cycle) {
        cout << "NEGATIVE CYCLE" << endl;
    } else {
        for (int i = 0; i < V; i++) {
            int k = 0;
            for (int j = 0; j < V; j++) {
                if (k++) cout << " ";
                cout << (G[i][j] != INF ? to_string(G[i][j]) : "INF");
            }
            cout << endl;
        }
    }
}
