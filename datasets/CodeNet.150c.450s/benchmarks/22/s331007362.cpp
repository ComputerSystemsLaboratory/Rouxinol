#include "bits/stdc++.h"
using namespace std;

#define rep(i,N) for(int i=0;i<(int)N;++i)
#define rep1(i,N) for(int i=1;i<=(int)N;++i)

using int64 = long long;
using i64 = long long;

const int inf = 1 << 30;
const i64 inf64 = 1ll << 60;

const int mod = 1e9 + 7;

template<typename T>
vector<T> make_v(size_t a, T b) { return vector<T>(a, b); }

template<typename... Ts>
auto make_v(size_t a, Ts... ts) {
   return vector<decltype(make_v(ts...))>(a, make_v(ts...));
}

int dy[] = { 0, 1, 0, -1 };
int dx[] = { -1, 0, 1, 0 };

template <typename T, typename U>
ostream& operator<<(ostream& os, const pair<T, U>& p) {
   return os << "(" << p.first << ", " << p.second << ")";
}

template <typename T> 
ostream& operator<<(ostream& os, const vector<T>& v) {
   os << "[";
   for (auto& e : v) os << e << ", ";
   return os << "]";
}

template <typename T>
struct Edge {
   int from, to;
   T cost;
};

template <typename T>
vector<T> bellman_ford(vector<Edge<T>>& edges, int V, int s) {
   const auto inf = numeric_limits<T>::max();
   vector<T> dist(V, inf);
   dist[s] = 0;
   for (int i = 0; i < V - 1; ++i) {
      for (auto& e : edges) {
         if (dist[e.from] == inf) continue;
         dist[e.to] = min(dist[e.to], dist[e.from] + e.cost);
      }
   }
   for (auto& e : edges) {
      if (dist[e.from] == inf) continue;
      if (dist[e.from] + e.cost < dist[e.to]) return vector<T>();
   }
   return dist;
}


int main() {
   int V, E, r; cin >> V >> E >> r;
   vector<Edge<i64>> edges(E);
   rep(i, E) cin >> edges[i].from >> edges[i].to >> edges[i].cost;

   auto d = bellman_ford(edges, V, r);
   if (d.size() == 0) {
      cout << "NEGATIVE CYCLE" << endl;
   } else {
      for (auto& e : d) {
         if (e == numeric_limits<i64>::max()) cout << "INF" << endl;
         else cout << e << endl;
      }
   }
}

