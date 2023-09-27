#include <bits/stdc++.h>
using namespace std;

struct edge {
    int from, to;
    int cost;
};

struct vert {
    vector<edge> edges;
};

bool bellmanford(
        const vector<vert>& verts,
        int initPoint,
        vector<long long>& dist,
        vector<int>& prev
        ) {
    for (int i = 0; i < dist.size(); ++i) {
        dist[i] = LONG_LONG_MAX;
    }
    dist[initPoint] = 0;
    prev[initPoint] = initPoint;

    bool updated = false;
    for (int i = 0; i < verts.size(); ++i) {
        updated = false;
        for (const auto& v : verts) {
            for (const auto& e : v.edges) {
                if (dist[e.from] == LONG_LONG_MAX) continue;
                if (dist[e.from] + e.cost >= dist[e.to]) continue;
                dist[e.to] = dist[e.from] + e.cost;
                prev[e.to] = prev[e.from];
                updated = true;
            }
        }
    }
    return !updated;
}

int main() {
    int V, E, r;
    cin >> V >> E >> r;
    vector<vert> verts(V);
    vector<long long> dist(V);
    vector<int> prev(V);
    for (int i = 0; i < E; ++i) {
        edge e;
        cin >> e.from >> e.to >> e.cost;
        verts[e.from].edges.push_back(e);
    }
    bool negative_cycle = !bellmanford(verts, r, dist, prev);
    if (negative_cycle) {
        cout << "NEGATIVE CYCLE" << endl;
    } else {
        for (int i = 0; i < V; ++i) {
            if (dist[i] == LONG_LONG_MAX) {
                cout << "INF" << endl;
            } else {
                cout << dist[i] << endl;
            }
        }
    }
}

