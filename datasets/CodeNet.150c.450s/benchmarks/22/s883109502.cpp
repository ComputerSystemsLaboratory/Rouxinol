#include <bits/stdc++.h>
using namespace std;


/*
    Bellman-Ford's Algorithm
    Time Complexity : (VE)
    
    verify : AOJ GRL_1_B (2020-01-13)
    URL : https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B
*/


template<typename T>
pair<bool, vector<T>> bellmanford(const vector<vector<pair<int, T>>> &G, int s) {
    const T inf = numeric_limits<T>::max();
    int V = G.size();
    vector<T> dist(V, inf); dist[s] = 0;
    bool negative_cycle = false;
    
    for (int relax = 0; relax <= V; relax++) {
        for (int from = 0; from < V; from++) {
            for (const auto &e : G[from]) {
                int to; T cost; tie(to, cost) = e;
                if (dist[from] == inf) continue;
                if (dist[from] + cost < dist[to]) {
                    dist[to] = dist[from] + cost;
                    if (relax == V) negative_cycle = true;
                }
            }
        }
    }
    return {negative_cycle, dist};
}



int main() {
    int V, E, s;
    cin >> V >> E >> s;
    vector<vector<pair<int, long long>>> G(V);
    for (int i = 0; i < E; i++) {
        int from, to; long long cost;
        cin >> from >> to >> cost;
        G[from].emplace_back(to, cost);
    }
    
    bool negative_cycle;
    vector<long long> dist;
    tie(negative_cycle, dist) = bellmanford(G, s);
    if (negative_cycle) { cout << "NEGATIVE CYCLE" << endl; }
    else {
        for (auto ans : dist) {
            if (ans == INT64_MAX) cout << "INF" << endl;
            else cout << ans << endl;
        }
    }
    return 0;
}
