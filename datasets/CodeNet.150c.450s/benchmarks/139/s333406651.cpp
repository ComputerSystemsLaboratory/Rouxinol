#include <bits/stdc++.h>
using namespace std;

class Bidirectional {
  public:
  int verts;
  int edges;
  vector<vector<int>> adj;

  Bidirectional() {}
  Bidirectional(const int &n) :
      verts(n), adj(vector<vector<int>>(n)) {}
  Bidirectional(const int &n, const int &m) :
      verts(n), edges(m), adj(vector<vector<int>>(n)) {}
};

istream &operator>>(istream &is, Bidirectional &g) {
  int from, to;
  for (int i = 0; i < g.edges; i++) {
    is >> from >> to;
    g.adj[--from].emplace_back(--to);
    g.adj[to].emplace_back(from);
  }
  return is;
}

int main() {
  int N, M;
  cin >> N >> M;

  Bidirectional g(N, M);
  cin >> g;

  vector<int> from(N, -1);
  queue<int> BFS;
  from[0] = 0;
  BFS.push(0);

  int top;

  while (!BFS.empty()) {
    top = BFS.front();
    BFS.pop();

    for (auto &&to : g.adj[top]) {
      if (from[to] != -1) continue;
      from[to] = top;
      BFS.emplace(to);
    }
  }

  cout << "Yes\n";

  for (int i = 1; i < N; i++) {
    cout << from[i] + 1 << "\n";
  }
  return 0;
}