#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define rrep(i, a, b) for (int i = a; i >= (b); i--)
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;
template <class T>
inline bool chmin(T& a, T b) {
   if (a > b) {
      a = b;
      return true;
   }
   return false;
}
template <class T>
inline bool chmax(T& a, T b) {
   if (a < b) {
      a = b;
      return true;
   }
   return false;
}
void hr() {
   cerr << "--------------" << endl;
}
const int INF = 1001001001;
const int MOD = 1000000007;
// const int MOD = 998244353;

struct edge {
   int u, v, cost;
};
bool comp(const edge& e1, const edge& e2) {
   return e1.cost < e2.cost;
}
struct UnionFind {
   vector<int> d;
   UnionFind(int n = 0) : d(n, -1) {}
   int find(int x) {
      if (d[x] < 0) return x;
      return d[x] = find(d[x]);
   }
   bool unite(int x, int y) {
      x = find(x);
      y = find(y);
      if (x == y) return false;
      if (d[x] > d[y]) swap(x, y);
      d[x] += d[y];
      d[y] = x;
      return true;
   }
   bool same(int x, int y) { return find(x) == find(y); }
   int size(int x) { return -d[find(x)]; }
};
int main() {
   cin.tie(0);
   ios_base::sync_with_stdio(0);

   int V, E;
   cin >> V >> E;

   edge es[E];
   rep(i, 0, E) {
      int s, t, w;
      cin >> s >> t >> w;
      es[i].u = s, es[i].v = t, es[i].cost = w;
   }
   sort(es, es + E, comp);
   UnionFind uf(V);
   int res = 0;
   rep(i, 0, E) {
      edge e = es[i];
      if (!uf.same(e.u, e.v)) {
         uf.unite(e.u, e.v);
         res += e.cost;
      }
   }
   cout << res << endl;
   return 0;
}
