#include <iostream>
#include <vector>
#define ll long long
#define INF 100000000000000000
#define MAX 100010
using namespace std;

struct Edge {
    int from, to;
    ll cost;
    Edge(int s, int t, ll c) : from(s), to(t), cost(c) {}
};

vector<ll> dist;

bool bellman_ford(vector<Edge> &g, int n, int s) {  // nは頂点数、sは開始頂点
    dist = vector<ll>(n, INF);                      // distをINFで初期化
    dist[s] = 0;
    for (int i = 0; i <= n; i++) {
        for (auto &e : g) {
            if (dist[e.from] == INF) continue;
            if (dist[e.from] + e.cost < dist[e.to]) {
                dist[e.to] = dist[e.from] + e.cost;
                if (i == n) return true;
            }
        }
    }
    return false;
}

int main() {
    int v, e, r, s, t;
    ll d;
    vector<Edge> g;
    cin >> v >> e >> r;
    for (int i = 0; i < e; i++) {
        cin >> s >> t >> d;
        g.push_back(Edge(s, t, d));
    }
    bool check = bellman_ford(g, v, r);
    if (check) {
        cout << "NEGATIVE CYCLE" << endl;
    } else {
        for (int i = 0; i < v; i++) {
            if (dist[i] == INF)
                cout << "INF" << endl;
            else
                cout << dist[i] << endl;
        }
    }
    return 0;
}

