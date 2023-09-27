#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct DisjointSet
{
  vector<int> p;
  vector<int> rank;

  DisjointSet(int n) : p(n), rank(n, 1) {
    for (int i=0; i < n; i++){
      p[i] = i;
    }
  }

  int findSet(int x) {
    if (x != p[x]) p[x] = findSet(p[x]);
    return p[x];
  }

  void unite(int x, int y) {
    int root_x, root_y;
    root_x = findSet(x);
    root_y = findSet(y);

    if (rank[root_x] > rank[root_y]) {
      p[root_y] = root_x;
    } else if (rank[root_x] < rank[root_y]) {
      p[root_x] = root_y;
    } else {
      p[root_y] = root_x;
      root_x++;
    }
  }

  bool same(int x, int y) {
    return findSet(x) == findSet(y);
  }

  int size(int x) {
    return rank[findSet(x)];
  }
};


struct Edge
{
  int a, b, cost;

  bool operator<(const Edge& o) const {
    return cost < o.cost;
  }
};

struct Graph
{
  int n;
  vector<Edge> ed;

  int kruskal() {
    sort(ed.begin(), ed.end());

    DisjointSet dj(n);
    int min_cost = 0;

    for (int i=0; i < ed.size(); i++) {
      Edge& e = ed[i];
      if (!dj.same(e.a, e.b)) {
        min_cost += e.cost;
        dj.unite(e.a, e.b);
      }
    }

    return min_cost;
  }
};

Graph input() {
  Graph g;
  int m;
  cin >> g.n >> m;
  for (int i=0; i < m; i++){
    Edge e;
    cin >> e.a >> e.b >> e.cost;
    g.ed.push_back(e);
  }
  return g;
}


int main()
{
  Graph g = input();
  cout << g.kruskal() << endl;
  return 0;
}

