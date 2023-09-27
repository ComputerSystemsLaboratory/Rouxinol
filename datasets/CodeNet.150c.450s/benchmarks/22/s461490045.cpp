#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const long long INF = (1LL << 32);

class BellmanFord {
    class Edge {
        public:
        int u, v, w;
        Edge(int source, int target, int weight) {
            u = source;
            v = target;
            w = weight;
        }
    };

    private:
    vector<long long> d;
    vector<Edge> edges;

    public:
    BellmanFord(int n) { d.resize(n, INF); }

    void add_edge(int u, int v, int w) {
        Edge e(u, v, w);
        edges.push_back(e);
    }

    void set_distances(int sp) {
        d[sp] = 0;
        for (int i = 0; i < d.size(); ++i) {
            for (Edge e : edges) {
                if (d[e.u] < INF && d[e.u] + e.w < d[e.v]) {
                    d[e.v] = d[e.u] + e.w;
                }
            }
        }
    }

    long long get_distance(int node) { return d[node]; }

    bool has_negative_cycle() {
        for (Edge e : edges) {
            if (d[e.u] < INF && d[e.u] + e.w < d[e.v]) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int V, E, r;
    cin >> V >> E >> r;

    BellmanFord bf(V);

    for (int i = 0; i < E; ++i) {
        int s, t, w;
        cin >> s >> t >> w;
        bf.add_edge(s, t, w);
    }

    bf.set_distances(r);

    if (bf.has_negative_cycle()) {
        cout << "NEGATIVE CYCLE" << endl;
    } else {
        for (int i = 0; i < V; ++i) {
            ll d = bf.get_distance(i);
            if (d < INF)
                cout << d << endl;
            else
                cout << "INF" << endl;
        }
    }

    return 0;
}
