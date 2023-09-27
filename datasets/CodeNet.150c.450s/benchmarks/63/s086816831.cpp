/**
 * GRL_1-A - Shortest Path - Single Source Shortest Path
 */

#include <iostream>
#include <vector>
#include <queue>

using namespace std;
using ULL = unsigned long long;

const ULL INF = 1UL << 63;

struct edge {
    int to;
    ULL cost;
};

typedef pair<ULL, int> P;

int main() {

    int V, E, r;
    cin >> V >> E >> r;

    vector<edge> G[V];
    ULL cost[V];

    for (int i = 0; i < E; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        G[s].push_back(edge{t, (ULL) d});
    }

    fill(cost, cost + V, INF);
    cost[r] = 0;

    priority_queue<P, vector<P>, greater<P>> pq;
    pq.push(make_pair(0, r));

    while (!pq.empty()) {

        P p = pq.top();
        pq.pop();

        if (p.first > cost[p.second]) continue;

        for (edge e : G[p.second]) {
            if (p.first + e.cost < cost[e.to]) {
                cost[e.to] = p.first + e.cost;
                pq.push(P(cost[e.to], e.to));
            }
        }
    }

    for (int i = 0; i < V; i++) {
        if (cost[i] != INF) {
            cout << cost[i] << endl;
        } else {
            cout << "INF" << endl;
        }
    }
}
