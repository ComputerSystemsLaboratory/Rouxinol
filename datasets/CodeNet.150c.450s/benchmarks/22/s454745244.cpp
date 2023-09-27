/* bellman_ford.cpp
    ベルマンフォード法で、ある頂点から各頂点への最短距離を求めるアルゴリズム
    負の辺が含まれる場合も適用でき、負の閉路も検出可能

    始点から終点に行くまでに通らない負の閉路は検出したくない時:
        http://sigma1113.hatenablog.com/entry/2019/08/12/130042

    verified:
*/

#include <bits/stdc++.h>
using namespace std;

struct Edge {
    long long from;
    long long to;
    long long cost;
};
using Edges = vector<Edge>;
const long long INF = 1LL << 60;

/* bellman_ford(Es,s,t,dis)
    入力: 全ての辺Es, 頂点数V, 開始点 s, 最短経路を記録するdis
    出力: 負の閉路が存在するなら ture
    計算量：O(|E||V|)
    副作用：dis が書き換えられる
*/
bool bellman_ford(const Edges &Es, int V, int s, vector<long long> &dis) {
    dis.resize(V, INF);
    dis[s] = 0;
    int cnt = 0;
    while (cnt < V) {
        bool end = true;
        for (auto e : Es) {
            if (dis[e.from] != INF && dis[e.from] + e.cost < dis[e.to]) {
                dis[e.to] = dis[e.from] + e.cost;
                end = false;
            }
        }
        if (end) break;
        cnt++;
    }
    return (cnt == V);
}

int main() {
    int V, E, r;
    cin >> V >> E >> r;
    Edges Es;
    for (int i = 0; i < E; i++) {
        long long s, t, d;
        cin >> s >> t >> d;
        Es.push_back({s, t, d});
    }
    vector<long long> dis;
    if (bellman_ford(Es, V, r, dis)) {
        cout << "NEGATIVE CYCLE" << endl;
    } else {
        for (int i = 0; i < V; i++) {
            if (dis[i] == INF) {
                cout << "INF" << endl;
            } else {
                cout << dis[i] << endl;
            }
        }
    }

    return 0;
}

