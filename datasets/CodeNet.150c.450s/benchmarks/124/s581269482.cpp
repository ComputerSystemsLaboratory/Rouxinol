#include <iostream>
#include <queue>
#include <vector>
#include <utility>
using namespace std;
typedef pair<int, int> P;
struct edge {int to, cost;};
const int INF = (1 << 28);
int n;
vector<edge> G[110];


vector<int> dijkstra(int s) {
    priority_queue<P, vector<P>, greater<P>> que;
    que.push(P(0, s));
    vector<int> d(n, INF);
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
    return d;
}

int main(void) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int u, k, v, c;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            cin >> v >> c;
            G[u].push_back(edge {v, c});
        }
    }
    vector<int> d = dijkstra(0);
    for (int i = 0; i < n; i++) {
        cout << i << " " << d[i] << endl;
    }

    return 0;
}