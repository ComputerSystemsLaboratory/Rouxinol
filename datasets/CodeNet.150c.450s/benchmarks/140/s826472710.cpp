#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
struct Edge {
  using w_type = T;
  Edge(int u, int v, w_type w): u(u), v(v), w(w) { }
  int u, v;
  w_type w;
  bool operator<(const Edge<T> & rhs) const {
    if (w != rhs.w) { return w < rhs.w; }
    if (u != rhs.u) { return u < rhs.u; }
    return v < rhs.v;
  }
};

class DisjointSet {
public:
  DisjointSet(const unsigned n_sets): n_sets_(n_sets) {
    p_.reserve(n_sets);
    rank_.reserve(n_sets);
  }
  void MakeSet(const unsigned x) { p_[x] = x; rank_[x] = 0; }
  void Union(const unsigned lhs, const unsigned rhs) {
    Link(FindSet(lhs), FindSet(rhs));
  }
  void Link(const unsigned lhs, const unsigned rhs) {
    if (rank_[lhs] > rank_[rhs]) { p_[rhs] = lhs; }
    else {
      p_[lhs] = rhs;
      if (rank_[lhs] == rank_[rhs]) { ++rank_[rhs]; }
    }
  }
  unsigned FindSet(const unsigned x) {
    if (x != p_[x]) { p_[x] = FindSet(p_[x]); }
    return p_[x];
  }

private:
  unsigned n_sets_;
  vector<unsigned> p_;
  vector<unsigned> rank_;
};

template <class Edge>
decltype(auto) Kruskal(vector<Edge> & edges,
                 typename vector<Edge>::size_type node_num) {
  using size_type = typename vector<Edge>::size_type;
  using const_it = typename vector<Edge>::const_iterator;
  using w_type = typename Edge::w_type;

  w_type weight_sum = 0;
  size_type edge_num = 0;
  DisjointSet dis_set(node_num);
  for (size_type i = 0; i < node_num; ++i) { dis_set.MakeSet(i); }
  sort(edges.begin(), edges.end());
  for (auto & e: edges) {
    if (dis_set.FindSet(e.u) != dis_set.FindSet(e.v)) {
      weight_sum += e.w;
      dis_set.Union(e.u, e.v);
      ++edge_num;
    }
    if (edge_num == node_num - 1) { break; }
  }

  return weight_sum;
}

int main(int argc, char const *argv[]) {
  vector<Edge<unsigned>> edges;
  unsigned V, E;
  cin >> V >> E;
  for (unsigned i = 0; i < E; ++i) {
    unsigned u, v;
    unsigned w;
    cin >> u >> v >> w;
    edges.emplace_back(u, v, w);
  }
  cout << Kruskal(edges, V) << endl;
  return 0;
}