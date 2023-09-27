#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;


struct Edge {
  Edge(int _from, int _to, int _cost) : from(_from), to(_to), cost(_cost) {}
  int from, to, cost;

  bool operator<(const Edge& other) const {
    return cost < other.cost;
  }
};


class UF {
public:
  UF(int n) : e(n, -1) {}

  int find(int x) {
    return e[x] < 0 ? x : e[x] = find(e[x]);
  }

  bool same(int a, int b) {
    return find(a) == find(b);
  }

  bool unite(int a, int b) {
    a = find(a), b = find(b);
    if (a == b) return false;
    if (e[a] > e[b]) swap(a, b);
    e[a] += e[b]; e[b] = a;
    return true;
  }

private:
  vector<int> e;
};



void solve(int n, int k) {
  vector<Edge> edges;
  edges.reserve(k);

  for (int i = 0; i < k; ++i) {
    int u, v, c;
    scanf("%d %d %d", &u, &v, &c);
    edges.push_back(Edge(u, v, c));
  }

  sort(edges.begin(), edges.end());

  UF uf(n);
  int counter = 0;
  int ans = 0;
  for (size_t i = 0; i < edges.size(); ++i) {
    if (counter >= n-1) break;
    Edge e = edges[i];
    if (!uf.same(e.from, e.to)) {
      ans += e.cost;
      uf.unite(e.from, e.to);
      ++counter;
    }
  }

  printf("%d\n", ans);
}

int main() {

  int n, k;
  scanf("%d %d", &n, &k);

  solve(n, k);
  return 0;
}

