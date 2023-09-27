#include <bits/stdc++.h>
using namespace std;

const int INF = numeric_limits<int>::max();

struct Graph {
    enum Color {WHITE, GRAY, BLACK};
    vector<vector<int>> cost;
    vector<Color> color;
    vector<int> mincost;
    Graph(int n) {
        cost.assign(n, vector<int>(n, INF));
        color.assign(n, WHITE);
        mincost.assign(n, INF);
    }
};

int main()
{
    int n;
    cin >> n;
    Graph g(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> g.cost[i][j];
            g.cost[i][j] = g.cost[i][j] == -1 ? INF : g.cost[i][j];
        }
    }
    
    int ans = 0;

    // Prim
    g.mincost[0] = 0;
    while (true) {
        int u = -1;
        for (int v = 0; v < n; v++) {
            if (g.color[v] == Graph::WHITE && (u == -1 || g.mincost[v] < g.mincost[u])) {
                u = v;
            }
        }
        if (u == -1) break;
        g.color[u] = Graph::BLACK;
        ans += g.mincost[u];
        for (int v = 0; v < n; v++) {
            g.mincost[v] = min(g.mincost[v], g.cost[u][v]);
        }
    }
    cout << ans << endl;
}
