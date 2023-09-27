#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node {
  int v, cost;
  bool operator>(const Node &n) const {
    return cost > n.cost;
  }
};

int main() {
  int n;
  cin >> n;

  vector<vector<int>> g(n, vector<int>(n, -1));
  for (int i = 0; i < n; i++) {
    int u, k;
    cin >> u >> k;
    for (int j = 0; j < k; j++) {
      int v, c;
      cin >> v >> c;
      g[u][v] = c;
    }
  }

  vector<int> dists(n, -1);
  priority_queue<Node, vector<Node>, greater<Node>> q;
  q.push({0, 0});
  while (!q.empty()) {
    Node node = q.top();
    q.pop();

    if (dists[node.v] != -1) {
      continue;
    }
    dists[node.v] = node.cost;

    for (int i = 0; i < n; i++) {
      if (g[node.v][i] != -1) {
	q.push({i, node.cost + g[node.v][i]});
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << i << ' ' << dists[i] << endl;
  }

  return 0;
}

