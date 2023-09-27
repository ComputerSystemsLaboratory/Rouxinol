#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;
typedef pair<int, int> P;
const int INF = 2100000000;

struct edge {int to, cost;};

int V, E, r;
int d[100010];
vector<edge> G[100010];

void dijkstra(int s) {
    priority_queue<P, vector<P>, greater<P>> que;
    que.push(P(0, s));
    fill(d, d + V, INF);
    d[s] = 0;
    while (!que.empty()) {
        P p = que.top(); que.pop();
        int v = p.second;
        if (d[v] < p.first) continue;
        for (auto e: G[v]) {
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));
            }
        }
    }
}

int main(void) {
    cin >> V >> E >> r;
    for (int i = 0; i < E; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        G[s].push_back(edge {t, d});
    }

    dijkstra(r);

    for (int i = 0; i < V; i++) {
        if (d[i] < INF) cout << d[i] << endl;
        else cout << "INF" << endl;
    }

    return 0;
}