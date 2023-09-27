#include <iostream>
#include <vector>
#include <queue>
#include <bitset>
#include <algorithm>
#include <numeric>

using namespace std;

const int kInfinity = 0x3F3F3F3F;
const int kNil = -1;
const int kMaxV = 10010;

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

template <class Edge>
decltype(auto) Prim(vector<Edge> & edges,
                 typename vector<Edge>::size_type node_num,
                 typename vector<Edge>::size_type root) {
  using size_type = typename vector<Edge>::size_type;
  using const_it = typename vector<Edge>::const_iterator;
  using w_type = typename Edge::w_type;

  bitset<kMaxV> bs;
  vector<vector<Edge>> adjacency(node_num, vector<Edge>());
  for (const auto & e: edges) {
    adjacency[e.u].push_back(e);
  }
  vector<w_type> key(node_num, kInfinity);
  vector<int> parent(node_num, kNil);
  key[root] = 0;

  using Pair = pair<size_type, w_type>;
  auto compare = [](const Pair & x, const Pair & y) {
    return y.second < x.second || (!(x.second < y.second) && y.first < x.first);
  };
  priority_queue<Pair, vector<Pair>, decltype(compare)> que(compare);
  que.emplace(root, 0);

  while (!que.empty()) {
    auto top_no = que.top().first;
    auto top_key = que.top().second;
    que.pop();
    bs.set(top_no);
    for (const auto & e: adjacency[top_no]) {
      if (!bs.test(e.v) && e.w < key[e.v]) {
        key[e.v] = e.w;
        parent[e.v] = e.u;
        que.emplace(e.v, e.w);
      }
    }
  }

  auto weight_sum = accumulate(key.begin(), key.end(), 0);
  return weight_sum;
}

int main(int argc, char const *argv[]) {
  vector<Edge<int>> edges;
  unsigned V, E, r;
  cin >> V >> E;
  for (unsigned i = 0; i < E; ++i) {
    unsigned u, v;
    unsigned w;
    cin >> u >> v >> w;
    edges.emplace_back(u, v, w);
    edges.emplace_back(v, u, w);
  }
  cout << Prim(edges, V, 0) << endl;
  return 0;
}