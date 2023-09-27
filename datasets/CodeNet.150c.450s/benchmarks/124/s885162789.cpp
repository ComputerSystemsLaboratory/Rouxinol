#include <bits/stdc++.h>
using namespace std;
#define MAX_V 100
#define INF (1 << 21)

int cost[MAX_V][MAX_V];
int d[MAX_V];
bool used[MAX_V];
int V;

int s = 0; // start

void dijkstra()
{
    for (int i = 0; i < V; i++) {
        d[i] = INF;
        used[i] = false;
    }

    d[s] = 0;
    for(;;) {
        int v = -1;
        for (int u = 0; u < V; u++) {
            if (!used[u] && (v == -1 || d[u] < d[v]))
                v = u;
        }
        if (v == -1) break;

        used[v] = true;

        for (int u = 0; u < V; u++) {
            d[u] = min(d[u], d[v] + cost[v][u]);
        }
    }

    for (int u = 0; u < V; u++) {
        cout << u << " " << (d[u] == INF ? -1 : d[u]) << endl;
    }

}
int main()
{
    cin >> V;

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cost[i][j] = INF;
        }
    }
    for (int i = 0; i < V; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v, c;
            cin >> v >> c;
            cost[u][v] = c;
        }
    }

    dijkstra();

    return 0;
}

