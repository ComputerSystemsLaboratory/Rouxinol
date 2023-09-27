#include <bits/stdc++.h>
using namespace std;

template <typename T> struct Edge {
    int to; T cost;
    Edge(int to = -1, T cost = 0) : to(to), cost(cost) {}
};

template <typename T> vector<T> dijkstra(vector<vector<Edge<T>>> &g, int s, T inf = numeric_limits<T>::max()) {
    priority_queue<pair<T, int>, vector<pair<T, int>>, greater<pair<T, int>>> que;
    vector<T> dis(g.size(), inf);
    que.emplace(0, s);
    dis[s] = 0;
    while (!que.empty()) {
        auto p = que.top(); que.pop();
        if (dis[p.second] < p.first) continue;
        for (auto &e : g[p.second]) if (dis[e.to] > dis[p.second] + e.cost) {
            dis[e.to] = dis[p.second] + e.cost;
            que.emplace(dis[e.to], e.to);
        }
    }
    return dis;
}

int main() {
    int V, E, r;
    cin >> V >> E >> r;
    vector<vector<Edge<int>>> g(V);
    for (int i = 0; i < E; ++i) {
        int s, t, d;
        cin >> s >> t >> d;
        g[s].emplace_back(t, d);
    }
    auto dis = dijkstra(g, r);
    for (auto d : dis) {
        if (d == numeric_limits<int>::max()) cout << "INF" << endl;
        else cout << d << endl;
    }
}
