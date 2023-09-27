#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int INF = 1<<30;

struct Edge {
    int to, cost;
    Edge(int to, int cost) : to(to), cost(cost) {}
};

struct S {
    int v, cost;
    S(int v=0, int cost=0) : v(v), cost(cost) {}
    bool operator<(const S& s) const {
        return cost > s.cost;
    }
};

int V, E;
vector< vector<Edge> > G;
int main() {
    cin >> V >> E;
    int r; cin >> r;
    G.clear(); G.resize(V);
    for (int i = 0; i < E; i++) {
        int s, t, d; cin >> s >> t >> d;
        G[s].push_back(Edge(t, d));
    }

    vector<int> D(V, INF);
    D[r] = 0;
    priority_queue<S> PQ;
    PQ.push(S(r, 0));
    while (!PQ.empty()) {
        S c = PQ.top(); PQ.pop();
        for (int i = 0; i < G[c.v].size(); i++) {
            Edge& e = G[c.v][i];
            int ncost = D[c.v] + e.cost;
            if (D[e.to] > ncost) {
                D[e.to] = ncost;
                PQ.push(S(e.to, ncost));
            }
        }
    }
    for (int i = 0; i < V; i++) {
        if (D[i] == INF) {
            cout << "INF" << endl;
        } else {
            cout << D[i] << endl;
        }
    }

    return 0;
}