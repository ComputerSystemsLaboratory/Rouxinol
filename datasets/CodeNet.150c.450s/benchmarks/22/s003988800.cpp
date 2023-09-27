#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

template< typename T>
struct edge { 
   int from, to; 
   T cost; 
   edge(int from, int to, T cost) : from(from), to(to), cost(cost) {}
};

template< typename T>
using EDGE = vector< edge< T > >;

template< typename T>
vector< T > bellman_ford(EDGE< T > &es, int V, int s) {
   const auto INF = numeric_limits< T >::max();
   vector< T > dist(V, INF);
   dist[s] = 0;
   for (int i = 0; i < V - 1; i++) {
      for (auto &e : es) {
         if (dist[e.from] == INF) continue;
         dist[e.to] = min(dist[e.to], dist[e.from] + e.cost);
      }
   }
   for (auto & e : es) {
      if (dist[e.from] == INF) continue;
      if (dist[e.from] + e.cost < dist[e.to]) return vector< T >();
   }
   return dist;
}

int main() {
   int V, E, r;
   cin >> V >> E >> r;
   EDGE< int > edges;
   int s, t, d;
   for (int i = 0; i < E; i++) {
      cin >> s >> t >> d;
      edges.emplace_back(s, t, d);
   }
   
   auto res = bellman_ford(edges, V, r);
   if (res.empty()) cout << "NEGATIVE CYCLE" << endl;
   else {
      for (auto &aVertex : res) {
         if (aVertex == numeric_limits< int >::max()) cout << "INF" << endl;
         else cout << aVertex << endl;
      }
   }
   return 0;
}

