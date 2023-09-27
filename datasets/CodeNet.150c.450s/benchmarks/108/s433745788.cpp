// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_11_C: Breadth First Search

#include <algorithm>
#include <cstdio>
#include <queue>

using uint = unsigned int;

class Graph {
  const uint n_;
  uint* const g_;
  int* const depth_;
  
public:
  Graph(uint n) : n_(n),
                  g_(new uint[(n_*n_)]),
                  depth_(new int[n])
  {
    std::fill(g_, g_+(n_*n_), 0u);
  }

  ~Graph()
  {
    delete[] g_;
    delete[] depth_;
  }
  
  uint* operator [](uint i) const { return g_+(n_*i); }

  int* depth() const { return depth_; }

  void bfs()
  {
    init_depth();
    std::queue<uint> q;
    auto i = 0u;
    q.push(i);
    depth_[i] = 0;
    while (!q.empty()) {
      i = q.front();
      for (auto j = 0u; j < n_; ++j) {
        if ((*this)[i][j] && depth_[j] == -1) {
          q.push(j);
          depth_[j] = depth_[i]+1;
        }
      }
      q.pop();
    }
  }

private:
  void init_depth()
  {
    std::fill(depth_, depth_+(n_), -1);
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

  g.bfs();
  auto depth = g.depth();
  for (auto i = 0u; i < n; ++i) {
    std::printf("%u %d\n", i+1, depth[i]);
  }
}

// eof