#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
static const int VMAX = 10000;
int NV, NE;

class DisjointSet {
public:
  vector<int> rank, parent;
  int nset;
  DisjointSet() {}
  DisjointSet(int size) {
    rank.resize(size);
    parent.resize(size);
    nset = size;
    for (int i = 0; i < size; i++) {
      rank[i] = 0;
      parent[i] = i;
    }
  }
  void unite(int x, int y) { link(find_set(x), find_set(y)); }
  void link(int x, int y) {
    if (rank[x] < rank[y]) {
      parent[x] = y;
    } else {
      parent[y] = x;
      if (rank[x] == rank[y]) {
        rank[x]++;
      }
    }
    nset--;
  }
  int find_set(int x) {
    if (x != parent[x]) {
      parent[x] = find_set(parent[x]);
    }
    return parent[x];
  }
  bool same(int x, int y) { return find_set(x) == find_set(y); }
};

struct Edge {
  int x1, x2, weight;
  bool operator<(const Edge &right) const { return weight < right.weight; }
};

int main() {
  cin >> NV >> NE;
  vector<Edge> edges;
  for (int i = 0; i < NE; i++) {
    int s, t, w;
    cin >> s >> t >> w;
    edges.push_back(Edge{s, t, w});
  }
  auto ds = DisjointSet(NV);
  sort(edges.begin(), edges.end());

  int sum = 0;
  for (auto e : edges) {
    if (!ds.same(e.x1, e.x2)) {
      ds.unite(e.x1, e.x2);
      sum += e.weight;
      if (ds.nset == 1)
        break;
    }
  }
  cout << sum << endl;
}