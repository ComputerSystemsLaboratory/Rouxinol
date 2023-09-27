// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_11_D: Connected Components

#include <algorithm>
#include <cstdio>
#include <stack>
#include <vector>

using uint = unsigned int;

class Graph {
  std::vector<std::vector<uint>> g_;
  std::vector<int> root_;
  enum { NIL = -1, IN_STACK= -2 };

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
    std::fill(root_.begin(), root_.end(), NIL);
    for (auto i = 0u; i < g_.size(); ++i ) {
      if (root_[i] == NIL) {
        dfs(i);
      }
    }
  }

  bool reachable(uint from, uint to) const
  {
    return root_[from] == root_[to];
  }

private:
  void dfs(uint root)
  {
    std::stack<uint> s;
    s.push(root);
    while (!s.empty()) {
      auto i = s.top();
      s.pop();
      root_[i] = root;
      for (auto j : g_[i]) {
        if (root_[j] == NIL) {
          root_[j] = IN_STACK;
          s.push(j);
        }
      }
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