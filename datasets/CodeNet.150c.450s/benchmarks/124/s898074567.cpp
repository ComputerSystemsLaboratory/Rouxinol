#include <bits/stdc++.h>
using namespace std;

const int INF = numeric_limits<int>::max();

struct edge {
    int u, v, c;
};
struct Graph {
    vector<edge> es;
    vector<int> d;
    Graph(int n) {
        d.assign(n, INF);
    }
};

int main()
{
    int n;
    cin >> n;
    Graph g(n);
    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v, c;
            cin >> v >> c;
            g.es.push_back({u, v, c});
        }
    }

    g.d[0] = 0;
    for (int i = 0; i < n - 1; i++) {
        for (edge e : g.es) {
            if (g.d[e.u] != INF && g.d[e.v] > g.d[e.u] + e.c) {
                g.d[e.v] = g.d[e.u] + e.c;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << i << " " << g.d[i] << endl;
    }
}
