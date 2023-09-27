#include "bits/stdc++.h"

using namespace std;

const long long INF = 1000000000000000000;
const long long THRESHOLD = 10000000000;

void Main() {
    long long V, E;
    cin >> V >> E;
    vector<vector<long long>> D(V, vector<long long>(V, INF));
    for (long long i = 0; i < E; ++i) {
        long long s, t, d;
        cin >> s >> t >> d;
        D[s][t] = d;
    }
    for (long long i = 0; i < V; ++i) {
        D[i][i] = 0;
    }

    for (long long k = 0; k < V; ++k) {
        for (long long i = 0; i < V; ++i) {
            for (long long j = 0; j < V; ++j) {
                long long via = D[i][k] + D[k][j];
                if (THRESHOLD < via) {
                    via = INF;
                }
                else {
                    D[i][j] = min(D[i][j], via);
                }
            }
        }
    }

    for (long long i = 0; i < V; ++i) {
        if (D[i][i] < 0) {
            cout << "NEGATIVE CYCLE" << endl;
            return;
        }
    }

    for (long long i = 0; i < V; ++i) {
        for (long long j = 0; j < V; ++j) {
            if (j > 0) {
                cout << " ";
            }
            if (D[i][j] < INF) {
                cout << D[i][j];
            }
            else {
                cout << "INF";
            }
        }
        cout << endl;
    }
}

int main() {
    std::cout << std::fixed << std::setprecision(15);
    Main();
    return 0;
}

