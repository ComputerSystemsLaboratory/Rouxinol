#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e18;

struct Edge {
    int from, to;
    long long cost;
    Edge(int _to, long long _cost) :
        from(-1), to(_to), cost(_cost) {}
    Edge(int _from, int _to, long long _cost) :
        from(_from), to(_to), cost(_cost) {}
};

template<class T>
vector<T> Bell(const vector<Edge> &edges, int N, int s, T def) {
    vector<T> dist(N, def);
    vector<bool> negative(N);
    dist[s] = 0;
    for(int loop = 0; loop < 2 * N - 1; ++loop) {
        for(auto &e : edges) {
            if(dist[e.from] == INF) continue;
            if(dist[e.to] > dist[e.from] + e.cost) {
                dist[e.to] = dist[e.from] + e.cost;
                if(loop > N - 1) negative[e.to] = true;
            }
            if(loop > N - 1 && negative[e.from]) negative[e.to] = true;
        }
    }
    for(int i = 0; i < N; ++i) {
        if(negative[i]) dist[i] = -INF;
    }
    return dist;
}

void solve() {
    int V, E, r;
    cin >> V >> E >> r;
    vector<Edge> edges;
    for(int i = 0; i < E; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        edges.emplace_back(a, b, c);
    }
    auto dist = Bell(edges, V, r, INF);
    for(auto &d : dist) if(d == -INF) {
        cout << "NEGATIVE CYCLE" << '\n';
        return;
    }
    for(auto &d : dist) {
        if(d == INF) cout << "INF" << '\n';
        else cout << d << '\n';
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}

