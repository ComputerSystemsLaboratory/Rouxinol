#include <bits/stdc++.h>
using namespace std;

const double pi  = 2 * acos(0.0);
const double eps = 1e-8;

#define REP(i,a,b) for(int i=(a); i<(b);++i)
#define rep(i,n) REP(i,0,n)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

typedef int Cost;
struct Edge {
  int src, dst; Cost cost;
  Edge(int s, int d, Cost c) : src(s), dst(d), cost(c) {}
};
typedef vector<Edge>  Edges;
typedef vector<Edges> Graph;
typedef vector<Cost>  Array;
typedef vector<Array> Matrix;

int dx[8] = {0, 1, 0, -1, 1, -1, 1, -1};
int dy[8] = {1, 0, -1, 0, 1, -1, -1, 1};

struct UnionFind {
  vector<int> par;
  UnionFind(int size_) : par(size_) { for(int i = 0; i < size_; i++) par[i] = i; }
  void unite(int x, int y) {
    if ((x = find(x)) != (y = find(y))) {
      if (par[y] < par[x]) swap(x, y);
      par[x] = y;
    }
  }
  bool same(int x, int y) { return find(x) == find(y); }
  int find(int x) { return par[x] == x ? x : par[x] = find(par[x]); }
};

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(0);
  int n, q, com, x, y;
  cin >> n >> q;
  UnionFind uf = UnionFind(n);
  for (int i = 0; i < q; i++) {
    cin >> com >> x >> y;
    if (com == 0) uf.unite(x, y);
    else if (com == 1) cout << (uf.same(x, y) ? 1 : 0) << endl;
  }
  return 0; 
}