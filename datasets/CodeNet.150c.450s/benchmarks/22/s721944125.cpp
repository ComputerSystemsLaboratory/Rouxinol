#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << '\n';
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = (int)1e9;

// graph template
template<typename T>
class edge{
    public:
        int src, to; T cost;

        edge(int to, T cost): src(-1), to(to), cost(cost){}
        edge(int src, int to, T cost): src(src), to(to), cost(cost){}
};
template<typename T>
using Edges = vector<edge<T>>;
template<typename T>
using AdjacencyList = vector<Edges<T>>;
template<typename T>
using Matrix = vector<vector<T>>;

template<typename T>
vector<T> bellman_ford(Edges<T> &es, int V, int s){
    const auto INF = numeric_limits<T>::max();
    vector<T> dist(V, INF);
    dist[s] = 0;

    for(int i = 0; i < V - 1; i++){
        for(auto &e: es){
            if(dist[e.src] == INF) continue;
            dist[e.to] = min(dist[e.to], dist[e.src] + e.cost);
        }
    }

    for(auto &e: es){
        if(dist[e.src] == INF) continue;
        if(dist[e.to] > dist[e.src] + e.cost) return vector<T>();
    }

    return dist;
}

int main(void){
    int V, E, R;
  scanf("%d %d %d", &V, &E, &R);
  Edges< int > es;
  for(int i = 0; i < E; i++) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    es.emplace_back(a, b, c);
  }
  auto dists = bellman_ford(es, V, R);
  if(dists.empty()) puts("NEGATIVE CYCLE");
  for(auto &dist : dists) {
    if(dist == numeric_limits< int >::max()) puts("INF");
    else printf("%d\n", dist);
  }

    return 0;
}
