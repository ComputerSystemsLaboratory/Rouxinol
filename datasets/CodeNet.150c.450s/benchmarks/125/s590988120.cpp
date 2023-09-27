// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_11_B: Depth First Search

#include <algorithm>
#include <cstdio>
#include <stack>
#include <utility>

using uint = unsigned int;

class Graph {
  const uint n_;
  uint* const g_;
  std::pair<uint, uint>* const visited_;
  uint time_;
  
public:
  Graph(uint n) : n_(n),
                  g_(new uint[(n_*n_)]),
                  visited_(new std::pair<uint, uint>[n_])
  {
    std::fill(g_, g_+(n_*n_), 0u);
  }

  ~Graph()
  {
    delete[] g_;
    delete[] visited_;
  }
  
  uint* operator [](uint i) const { return g_+(n_*i); }

  std::pair<uint, uint>* visited() const { return visited_; }

  void dfs()
  {
    init_visited();
    for (auto i = 0u; i < n_; ++i) {
      if (visited_[i].first) continue;
      inner_dfs(i);
    }
  }

private:
  void init_visited()
  {
    time_ = 0u;
    for (auto i = 0u; i < n_; ++i) {
      visited_[i].first = 0u;
    }
  }

  void inner_dfs(uint i)
  {
    std::stack<uint> s;
    s.push(i);
    visited_[i].first = time_++;
    auto last_visited = i;
  outer_loop:
    while (!s.empty()) {
      auto j = s.top();
      for (auto k = last_visited+1; k < n_; ++k) {
        if ((*this)[j][k] && !visited_[k].first) {
          s.push(k);
          visited_[k].first = time_++;
          goto outer_loop;
        }
      }
      s.pop();
      visited_[j].second = time_++;
      last_visited = j;
    }
  }
};

int main()
{
  uint n;
  std::scanf("%u", &n);

  Graph g(n);

  uint u, k, v;
  for (auto i = 0u; i < n; ++i) {
    std::scanf("%u %u", &u, &k);
    for (auto j = 0u; j < k; ++j) {
      std::scanf("%u", &v);
      g[u-1][v-1] = 1;
    }
  }

  g.dfs();
  auto visited = g.visited();
  for (auto i = 0u; i < n; ++i) {
    std::printf("%u %u %u\n", i+1, visited[i].first+1, visited[i].second+1);
  }
}

// eof