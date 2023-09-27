#include <bits/stdc++.h>

using namespace std;

struct BellmanFord {
    BellmanFord() = default;

    explicit BellmanFord(int n) { init(n); }

    struct edge {
        edge() = default;
        edge(int to, int cost) : to(to), cost(cost) {}
        int to, cost;
    };

    const long long linf = 1001001001001001001ll;

    bool f;
    vector<vector<edge>> G;
    vector<long long> d;

    void init(int n) {
        f = false;
        G.resize(n);
    }

    void add(int u, int v, int c) {
        G[u].push_back(edge(v, c));
    }

    void bellman_ford(int s) {
        d = vector<long long>(G.size(), linf);
        d[s] = 0;

        for (int i = 0; i < G.size(); ++i) {
            for (int v = 0; v < G.size(); ++v) {
                for (auto &e : G[v]) {
                    if (d[v] != linf && d[e.to] > d[v] + e.cost) {
                        d[e.to] = d[v] + e.cost;
                        if (i == G.size() - 1) f = true;
                    }
                }
            }
        }
    }
};


int main() {
    int v, e, r;
    cin >> v >> e >> r;

    auto bf = BellmanFord(v);
    for (int i = 0; i < e; ++i) {
        int s, t, d;
        cin >> s >> t >> d;

        bf.add(s, t, d);
    }

    bf.bellman_ford(r);
    if (bf.f) {
        cout << "NEGATIVE CYCLE" << endl;
    } else {
        for (int i = 0; i < v; ++i) {
            if (bf.d[i] == bf.linf) cout << "INF" << endl;
            else cout << bf.d[i] << endl;
        }
    }
}
