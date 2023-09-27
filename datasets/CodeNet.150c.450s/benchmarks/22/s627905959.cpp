#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

struct BellmanFord {
    struct edge {
        int from, to; long long cost;
        edge(int a, int b, long long c) : from(a), to(b), cost(c) {}
    };

    int V, E; vector<long long> d; vector<edge> es;
    BellmanFord(int v, int e) : V(v), E(e) {d = vector<long long>(V);}
    void add_edge(int from, int to, long long cost) {es.emplace_back(from, to, cost);}
    vector<long long>& shortest_path(int s) {
        for (long long& i : d) i = INF;
        d[s] = 0;
        while (1) {
            bool update = 0;
            for (const edge& e : es) {
                if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
                    d[e.to] = d[e.from] + e.cost;
                    update = 1;
                }
            }
            if (!update) break;
        }
        return d;
    }

    bool find_negative_loop() {
        for (long long& i : d) i = 0;
        for (int i = 0; i < V; ++i) {
            for (const edge& e : es) {
                if (d[e.to] > d[e.from] + e.cost) {
                    d[e.to] = d[e.from] + e.cost;
                    if (i == V - 1) return true;
                }
            }
        }
        return false;
    }

    bool find_negative_loop_start_with(int s) {
        for (long long& i : d) i = INF;
        d[s] = 0;
        for (int i = 0; i < V; ++i) {
            for (const edge& e : es) {
                if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
                    d[e.to] = d[e.from] + e.cost;
                    if (i == V - 1) return true;
                }
            }
        }
        return false;
    }
};


/**
 * AOJ Single Source Shortest Path (Negative Edges)
 * url:https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B
 */
int main(){
    int v, e, r;
    cin >> v >> e >> r;

    BellmanFord bf(v,e);
    for (int i = 0; i < e; ++i) {
        int s, t, d;
        cin >> s >> t >> d;
        bf.add_edge(s, t, d);
    }

    if (bf.find_negative_loop_start_with(r)) {
        puts("NEGATIVE CYCLE");
        return 0;
    }

    auto &ans = bf.shortest_path(r);
    for (auto &i : ans) {
        if (i != INF) cout << i << endl;
        else cout << "INF" << endl;
    }
}
