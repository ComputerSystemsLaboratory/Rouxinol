#include <bits/stdc++.h>
using namespace std;

using vvll = vector<vector<long long>>;
constexpr long long INF = 1e18;

vvll warshall_floyd(const vvll & Es){
    vvll dist(Es);
    for (int k = 0; k < Es.size(); ++k){
        for (int i = 0; i < Es.size(); ++i){
            if (dist[i][k] == INF) continue;
            for (int j = 0; j < Es.size(); ++j){
                if (dist[k][j] == INF) continue;
                if (dist[i][j] > dist[i][k] + dist[k][j]){
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    return dist;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int V, E;
    cin >> V >> E;
    vvll Es(V, vector<long long>(V, INF));
    for (int i = 0; i < V; ++i) Es[i][i] = 0;
    while (E--){
        int s, t;
        long long d;
        cin >> s >> t >> d;
        Es[s][t] = d;
    }
    auto dist = warshall_floyd(Es);
    for (int i = 0; i < V; ++i){
        if (dist[i][i] < 0){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }
    for (const auto & row : dist){
        if (row[0] == INF) {
            cout << "INF";
        } else {
            cout << row[0];
        }
        for (int i = 1; i < row.size(); ++i) {
            if (row[i] == INF) {
                cout << " INF";
            } else {
                cout << ' ' << row[i];
            }
        }
        cout << '\n';
    }
    return 0;
}