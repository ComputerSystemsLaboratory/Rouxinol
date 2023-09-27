#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

pair<vector<int>, bool> bellmanFord(int start,int V,const vector<tuple<int, int, int>> edges) {
    vector<int> dist(V, INF);
    bool negativeLoop = false;
    dist[start] = 0;
    for (int i = 0; i < V; i++) {
        for (const auto& e: edges){
            int from, to, cost;
            tie(from, to, cost) = e;
            if (dist[from] < INF && dist[to] > dist[from] + cost) {
                dist[to] = dist[from] + cost;
                if (i == V - 1) {
                    return {dist, true};
                }
            }
        }
    }
    return {dist, false};
}

signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int V, E, r;
    cin >> V >> E >> r;
    vector<tuple<int, int, int>> edges;
    for (int i = 0; i < E; i ++) {
        int from, to, cost;
        cin >> from >> to >> cost;
        edges.push_back(tuple<int, int, int>(from, to, cost));
    }
    vector<int> d; bool negLoop;
    tie(d, negLoop) = bellmanFord(r, V, edges);
    if (negLoop) {
        cout << "NEGATIVE CYCLE" << endl;
    } else {
        for (auto v: d) {
            if (v >= INF/2) cout << "INF" << endl;
            else cout << v << endl;
        }
    }
    return 0;
}
