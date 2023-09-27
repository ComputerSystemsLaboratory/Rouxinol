#include <iostream>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
#include <cmath>
#include <cstdint>
#include <string>
#include <climits>
#include <queue>

using namespace std;

struct Node;

struct Edge {
  int node;
  int cost;
};

struct Node {
  bool done = false;
  int cost = -1;
  std::vector<Edge> edges;
};

struct ProcessTarget {
  int node;
  int cost;
};

bool compareTargets(const ProcessTarget& a, const ProcessTarget& b) {
  return a.cost > b.cost;
}

int main() {
  int nv, ne, r;
  cin >> nv >> ne >> r;
  vector<Node> V(nv);
  for (int i = 0; i < ne; ++i) {
    int begin, end, cost;
    cin >> begin >> end >> cost;
    Edge edge;
    edge.cost = cost;
    edge.node = end;
    V[begin].edges.push_back(edge);
  }
  priority_queue<ProcessTarget, vector<ProcessTarget>, decltype(&compareTargets)> queue(compareTargets);
  ProcessTarget first;
  first.node = r;
  first.cost = 0;
  queue.push(first);
  V[r].cost = 0;

  while (!queue.empty()) {
    int processing = queue.top().node;
    queue.pop();

    for (auto& edge : V[processing].edges) {
      int newCost = V[processing].cost + edge.cost;
      if (V[edge.node].cost < 0 || newCost < V[edge.node].cost) {
        V[edge.node].cost = newCost;
        ProcessTarget next;
        next.node = edge.node;
        next.cost = newCost;
        queue.push(next);
      }
    }
  }

  for (auto& v : V) {
    if (v.cost == -1) {
      cout << "INF" << endl;
    } else {
      cout << v.cost << endl;
    }
  }
}

