#include<bits/stdc++.h>
using namespace std;

/*
  // Overview
  グラフの単一始点全点間最短路を求める。
  負辺があっても動作。負閉路検出可能。

  // Time complexity
  O(ve) (v: 頂点の数, e: 辺の数)

  // Initialization
  BellmanFord bf = BellmanFord(v, s); (v: 頂点の数, s: start)
  bf.add_edge(u, v, c); (u: start, v: to, c: コスト) (無向グラフの場合は両辺に張る)
  bf.build();
*/
struct BellmanFord {
    struct edge{
        int start;
        int to;
        long long cost;
        edge(int start, int to, long long cost) : start(start), to(to), cost(cost) { }
    };
    typedef pair< long long, int > P;
    const long long INF = 1LL<<60;
    int v;
    int s;
    vector< edge > es;
    vector< long long > dist;
    vector< bool > negative;
    bool has_negative = false;
    BellmanFord(int v, int s) : v(v), s(s), dist(v, INF), negative(v, false) {
        dist[s] = 0;
    }
    void add_edge(int start, int to, long long cost) {
        es.emplace_back(start, to, cost);
    }
    void build() {
        for (int i = 0; i < v; ++i) {
            for (edge &e : es) {
                if (dist[e.start] != INF && dist[e.to] > dist[e.start] + e.cost) {
                    dist[e.to] = dist[e.start] + e.cost;
                    if (i == v - 1) {
                        negative[e.to] = true;
                        has_negative = true;
                    }
                }
            }
        }
    }
    long long shortest_path_value(int t) {
        return dist[t];
    }
    bool is_negative(int t) {
        return negative[t];
    }
};

/*
    verified https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_1_A
*/
int main() {
    int V, E, r; cin >> V >> E >> r;
    BellmanFord bf(V, r);
    for (int i = 0; i < E; ++i) {
        int s, t, d; cin >> s >> t >> d;
        bf.add_edge(s, t, d);
    }
    bf.build();
    if (bf.has_negative) {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    for (int i = 0; i < V; ++i) {
        long long val = bf.shortest_path_value(i);
        if (val == bf.INF) cout << "INF" << endl;
        else cout << val << endl;
    }
}

