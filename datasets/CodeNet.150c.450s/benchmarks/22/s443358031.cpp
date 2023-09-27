#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = 1e18;

struct edge {
    int from;
    int to;
    int cost;
};

bool BellmanFord(vector<edge> &es, vector<ll> &dist, int V, int s) {
    dist.resize(V, INF);
    dist.at(s) = 0;
    for (int i = 0; i < V; ++i) {
        for (auto &e : es) {
            if (dist.at(e.from) == INF) continue;
            dist.at(e.to) = min(dist.at(e.to), dist.at(e.from) + e.cost);
        }
    }
    for (auto &e : es) {
        if (dist.at(e.from) == INF) continue;
        if (dist.at(e.to) > dist.at(e.from) + e.cost) return false;
    }
    return true;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int V, E, r;
    cin >> V >> E >> r;
    vector<edge> es;
    for (int i = 0; i < E; ++i) {
        int s, t, d;
        cin >> s >> t >> d;
        es.push_back(edge{s, t, d});
    }
    vector<ll> dist;
    if (BellmanFord(es, dist, V, r)) {
        for (auto &x : dist) {
            if (x == INF) {
                cout << "INF" << endl;
            } else {
                cout << x << endl;
            }
        }
    } else {
        cout << "NEGATIVE CYCLE" << endl;
    }

    return 0;
}
