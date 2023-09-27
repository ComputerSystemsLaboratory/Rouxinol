/**
 * @copyright (c) 2020 Daisuke Hashimoto
 */

#include <bits/stdc++.h>
using namespace std;
using Pair = pair<int64_t, int64_t>;
constexpr int64_t kInf = INT64_MAX / 2L;

// std::cout << std::setprecision(20) << 1.1 << endl;

struct Vertex {
  int64_t direction{-1};
  vector<int64_t> neighbours;
};

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int64_t N, M;
  cin >> N >> M;
  vector<Vertex> vertices(N + 1);
  for (int64_t i = 0; i < M; ++i) {
    int64_t a, b;
    cin >> a >> b;
    vertices[a].neighbours.emplace_back(b);
    vertices[b].neighbours.emplace_back(a);
  }

  queue<int64_t> q;
  vertices[1].direction = 1;
  q.emplace(1);
  while (!q.empty()) {
    const int64_t t = q.front();
    q.pop();
    for (const int64_t neighbour : vertices[t].neighbours) {
      if (vertices[neighbour].direction < 0) {
        vertices[neighbour].direction = t;
        q.emplace(neighbour);
      }
    }
  }
  bool is_okay = true;
  for (int64_t i = 1; i <= N; ++i) {
    if (vertices[i].direction < 0) {
      is_okay = false;
    }
  }
  if (is_okay) {
    cout << "Yes" << endl;
    for (int64_t i = 2; i <= N; ++i) {
      cout << vertices[i].direction << endl;
    }
  } else {
    cout << "No" << endl;
  }
  return 0;
}
