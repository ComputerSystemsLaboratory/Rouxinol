#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const ll INF = 1ll << 60;

// O(N^3)
// return value: whether the graph has negative loop
bool warshall_floyd(vector<vector<ll>> &adj) {
    int n = adj.size();
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (adj[i][k] == INF || adj[k][j] == INF) continue;
                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (adj[i][i] < 0) return false;
    }
    return true;
}

// verified
//   http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C&lang=jp
void AOJ_GRL_1_C() {
    int V, E;
    cin >> V >> E;
    vector<vector<ll>> adj(V, vector<ll>(V, INF));
    for (int i = 0; i < V; i++) adj[i][i] = 0;
    for (int i = 0; i < E; i++) {
        int s, t; ll d;
        cin >> s >> t >> d;
        adj[s][t] = d;
    }
    bool negative_loop = warshall_floyd(adj);
    if (!negative_loop) {
        cout << "NEGATIVE CYCLE" << '\n';
        return;
    }
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (j) cout << ' ';
            if (adj[i][j] == INF) cout << "INF";
            else cout << adj[i][j];
        }
        cout << '\n';
    }
}

int main() {
    AOJ_GRL_1_C();
    return 0;
}
