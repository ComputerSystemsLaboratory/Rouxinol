#include <vector>
#include <limits>
#include <algorithm>
using namespace std;

template <typename T>
struct edge{
    int from;
    int to;
    T weight;
};

template <typename T>
vector<T> bellman_ford(int V, const vector<edge<T>> &E, int source) {
    const T INF = numeric_limits<T>::max();
    vector<T> dist(V, INF);
    dist[source] = 0;

    // relax
    for(int i = 1; i < V; ++i) {
        for(edge<T> e : E) {
            if(dist[e.from] == INF) continue;
            dist[e.to] = min(dist[e.to], dist[e.from] + e.weight);
        }
    }

    // negative-weight cycle check
    for(edge<T> e : E) {
        if(dist[e.from] == INF) continue;
        if(dist[e.to] > dist[e.from] + e.weight) return vector<T>();
    }

    return dist;
}

#include <iostream>
int main() {
    int V, E, r;
    cin >> V >> E >> r;
    vector<edge<int>> edgelist(E);
    for(int i=0; i<E; ++i) {
        int s, t, d;
        cin >> s >> t >> d;
        edgelist[i] = {s, t, d};
    }

    auto dist = bellman_ford<int>(V, edgelist, r);
    if(dist.size() == 0) {
        cout << "NEGATIVE CYCLE" << endl;
    } else {
        for(int i=0; i<V; ++i) {
            int d = dist[i];
            if(d == numeric_limits<int>::max()) cout << "INF" << endl;
            else cout << d << endl;
        }
    }
}
