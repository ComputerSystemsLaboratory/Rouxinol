#include <bits/stdc++.h>
using namespace std;

#define int long long

// ???????????????????????????
struct bellmanford {
    struct edge {
        int to;
        int cost;
        edge(int to, int cost)
            : to(to), cost(cost) { }
    };

    bool f;
    vector<vector<edge>> G;
    vector<int> d;

    bellmanford(int V) {
        f = false;
        G.resize(V);
    }

    void add_edge(int s, int t, int d) {
        G[s].push_back(edge(t, d));
    }

    void run(int s) {
        d = vector<int>(G.size(), 1e+9);
        d[s] = 0;
        for(int i=0; i<G.size(); ++i) {
            for(int v=0; v<G.size(); ++v) {
                for(auto &e : G[v]) {
                    if(d[v] != 1e+9 && d[e.to] > d[v] + e.cost) {
                        d[e.to] = d[v] + e.cost;
                        if(i == G.size()-1) f = true;
                    }
                }
            }
        }
    }
};

signed main() {
    int V, E, r;
    cin >> V >> E >> r;
    bellmanford bf(V);
    for(int i=0; i<E; ++i) {
        int s, t, d;
        cin >> s >> t >> d;
        bf.add_edge(s, t, d);
    }
    bf.run(r);
    if(bf.f) cout << "NEGATIVE CYCLE" << endl;
    else {
        for(int i=0; i<V; ++i) {
            if(bf.d[i] == 1e+9) cout << "INF" << endl;
            else cout << bf.d[i] << endl;
        }
    }
    return 0;
}