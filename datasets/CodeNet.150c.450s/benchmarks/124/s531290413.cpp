#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
static const int INFTY = (1 << 20);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n;
vector<pair<int, int>> adj[100];
int *d;

void dijkstra() {
    priority_queue<pair<int, int>> PQ;
    int d[n], color[n];

    for (int i = 0; i < n; i++) {
        d[i] = INFTY;
        color[n] = WHITE;
    }
    d[0] = 0;
    PQ.push(make_pair(0, 0));

    while (!PQ.empty()) {
        pair<int, int> f = PQ.top();
        PQ.pop();

        int u = f.second;
        color[u] = BLACK;

        if (d[u] < f.first * (-1)) { continue; }

        for (int j = 0; j < adj[u].size(); j++) {
            int v = adj[u][j].first;
            if (color[v] == BLACK) { continue; }
            if (d[u] + adj[u][j].second < d[v]) {
                d[v] = d[u] + adj[u][j].second;
                // printf("d[%d] = %d\n", v, d[v]);
                PQ.push(make_pair(d[v] * (-1), v));
                color[v] = GRAY;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", i, d[i]);
    }
}

int main() {
    int k, u, v, c;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            cin >> v >> c;
            adj[u].push_back(make_pair(v, c));
        }
    }

    dijkstra();

    return 0;
}
