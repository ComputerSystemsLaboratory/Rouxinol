// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_11_D: Connected Components

#include <algorithm>
#include <climits>
#include <cstdio>
#include <vector>

using uint = unsigned int;

class Graph {
  std::vector<std::vector<uint>> g_;
  std::vector<uint> root_;
  
public:
  Graph(uint n)
  {
    g_.resize(n);
    root_.resize(n);
  }

  void add(uint from, uint to)
  {
    g_[from].push_back(to);
    g_[to].push_back(from);
  }

  void setup()
  {
    std::fill(root_.begin(), root_.end(), UINT_MAX);
    for (auto i = 0u; i < g_.size(); ++i ) {
      dfs(i, i);
    }
  }

  bool reachable(uint from, uint to) const
  {
    return root_[from] == root_[to];
  }

private:
  void dfs(uint i, uint root)
  {
    if (root_[i] != UINT_MAX) return;
    root_[i] = root;
    for (auto j = 0u; j < g_[i].size(); ++j) {
      dfs(g_[i][j], root);
    }
  }
  
};

int main()
{
  uint n, m;
  std::scanf("%u %u", &n, &m);

  Graph g(n);

  uint s, t;
  for (auto i = 0u; i < m; ++i) {
    std::scanf("%u %u", &s, &t);
    g.add(s, t);
  }
  g.setup();

  uint q;
  std::scanf("%u", &q);
  for (auto i = 0u; i < q; ++i) {
    std::scanf("%u %u", &s, &t);
    std::puts(g.reachable(s, t) ? "yes" : "no");
  }
}

// eof