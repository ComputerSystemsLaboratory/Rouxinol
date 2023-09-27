#include <bits/stdc++.h>
using namespace std;

#define int long long

// ?????????????????????
struct dijkstra {
    using p = pair<int, int>;

    struct edge {
        int to;
        int cost;
        edge(int to, int cost)
            : to(to), cost(cost) { }
    };

    vector<edge> G[100001];
    int d[100001];

    dijkstra(int V) {
        fill(d, d+V, 1e+9);
    }

    void add_edge(int s, int t, int d) {
        G[s].push_back(edge(t, d));
    }

    void run(int s) {
        d[s] = 0;
        priority_queue<p, vector<p>, greater<p>> que;
        que.push(p(0, s));
        while(!que.empty()) {
            p pi = que.top(); que.pop();
            int v = pi.second;
            if(d[v] < pi.first) continue;
            for(int i=0; i<G[v].size(); ++i) {
                edge e = G[v][i];
                if(d[e.to] > d[v] + e.cost) {
                    d[e.to] = d[v] + e.cost;
                    que.push(p(d[e.to], e.to));
                }
            }
        }
    }
};

signed main() {
    int V, E, r;
    cin >> V >> E >> r;
    dijkstra dij(V);
    for(int i=0; i<E; ++i) {
        int s, t, d;
        cin >> s >> t >> d;
        dij.add_edge(s, t, d);
    }

    dij.run(r);
    for(int i=0; i<V; ++i) {
        if(dij.d[i]==1e+9) cout << "INF" << endl;
        else cout << dij.d[i] << endl;
    }
    return 0;
}