// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_12_A: Minimum Spanning Tree

#include <algorithm>
#include <cstdio>

using uint = unsigned int;

class Graph {
  const uint n_;
  uint* const g_;
  
public:
  const static uint INFINIT = 2000+1;

  Graph(uint n) : n_(n), g_(new uint[(n_*n_)]) { }

  ~Graph() { delete[] g_; }
  
  uint* operator [](uint i) const { return g_+(n_*i); }

  uint mst()
  {
    uint min[n_];
    std::fill_n(min, n_, INFINIT);
    bool visited[n_];
    std::fill_n(visited, n_, false);
    auto total_weight = 0u;
    auto i = 0u; // 0-start
    visited[i] = true;
    for (auto n = 0u; n < n_-1; ++n) {
      auto cur_min = INFINIT;
      auto es = (*this)[i];
      for (auto j = 0u; j < n_; ++j) {
        if (visited[j]) continue;
        min[j] = std::min(min[j], es[j]);
        if (cur_min > min[j]) {
          cur_min = min[j];
          i = j;
        }
      }
      visited[i] = true;
      total_weight += cur_min;
    }
    return total_weight;
  }
};

const uint Graph::INFINIT;

int main()
{
  uint n;
  std::scanf("%u", &n);

  Graph g(n);

  int e;
  for (auto i = 0u; i < n; ++i) {
    for (auto j = 0u; j < n; ++j) {
      std::scanf("%i", &e);
      g[i][j] = (e != -1) ? static_cast<uint>(e) : Graph::INFINIT;
    }
  }

  auto total_weight = g.mst();
  std::printf("%u\n", total_weight);
}

// eof