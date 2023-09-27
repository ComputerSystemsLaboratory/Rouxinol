#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
using namespace std;

template<typename T>
struct edge {
    int from;
    int to;
    T cost;
};

template<typename T>
vector<T> BellmanFord(int s, int v, const vector<edge<T>> &g) {
    const T INF = numeric_limits<T>::max();
    vector<T> dist(v,INF);
    dist[s] = 0;
    for(int i = 0; i < v-1; ++i) {
        for(auto& e : g) if(dist[e.from]!=INF) {
            dist[e.to] = min(dist[e.to],  dist[e.from]+e.cost);
        }
    }
    for(auto &e : g) if(dist[e.from]!=INF) {
        if(dist[e.from] + e.cost < dist[e.to]) return vector<T>();
    }
    return dist;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int v,e,r; cin >>  v >> e >>  r;
    vector<edge<int>> g;
    REP(i,e) {
        int s,t,d; cin >> s >> t >> d;
        g.push_back({s,t,d});
    }
    vector<int> dist = BellmanFord(r,v,g);
    if(dist.empty()) cout << "NEGATIVE CYCLE" << endl;
    for(auto x : dist) {
        if(x==numeric_limits<int>::max()) cout << "INF" << '\n';
        else cout << x << '\n';
    }
    return 0;
}
