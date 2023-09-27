#include <iostream>

using namespace std;

const int VMAX = 100;
const long long int INF = 100000000000;

long long int dist[VMAX][VMAX];


void init(int V) {
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            dist[i][j] = (i == j ? 0 : INF);
        }
    }
}

void wf_run(int V) {
    for (int k = 0; k < V; ++k) {
        for (int i = 0; i < V; ++i) {
            if (dist[i][k] == INF) {
                continue;
            }
            for (int j = 0; j < V; ++j) {
                if (dist[k][j] == INF) {
                    continue;
                }
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}

bool has_negcycle(int V) {
    for (int i = 0; i < V; ++i) {
        if (dist[i][i] < 0) return true;
    }
    return false;
}

int main() {
    int V, E;
    cin >> V >> E;

    init(V);

    for (int i = 0; i < E; ++i) {
        int s, t, d;
        cin >> s >> t >> d;
        dist[s][t] = d;
        // ????????°??????
        // dist[t][s] = d;
    }
    wf_run(V);

    if (has_negcycle(V)) {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            if (dist[i][j] >= INF / 2) {
                cout << "INF";
                // } else if (dist[i][j] == 0) {
                //     cout << 0;
            } else {
                cout << dist[i][j];
            }
            if (j < V - 1) {
                cout << " ";
            }

        }
        cout << endl;
    }
}