#include <bits/stdc++.h>
using namespace std;
#define MAX_V 100
#define INF (1 << 21)

struct edge { int to, cost; };
typedef pair<int, int> P;

int V;
vector<edge> G[MAX_V];
int d[MAX_V];

// int cost[MAX_V][MAX_V];
// bool used[MAX_V];

int s = 0; // start

void dijkstra()
{
    priority_queue<P, vector<P>, greater<P> > que;
    for (int i = 0; i < V; i++) {
        d[i] = INF;
        // used[i] = false;
    }
    d[s] = 0;
    que.push(P(0, s));

    for (; !que.empty();) {
        P p = que.top(); que.pop();
        int v = p.second;
        if (d[v] < p.first) continue;
        for (int i = 0; i < G[v].size(); i++) {
            edge e = G[v][i];
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));
            }
        }
    }

    for (int u = 0; u < V; u++) {
        cout << u << " " << (d[u] == INF ? -1 : d[u]) << endl;
    }

}
int main()
{
    cin >> V;

    // for (int i = 0; i < V; i++) {
    //     for (int j = 0; j < V; j++) {
    //         cost[i][j] = INF;
    //     }
    // }

    for (int i = 0; i < V; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v, c;
            cin >> v >> c;
            G[u].push_back({v, c});
            // cost[u][v] = c;
        }
    }

    dijkstra();

    return 0;
}

