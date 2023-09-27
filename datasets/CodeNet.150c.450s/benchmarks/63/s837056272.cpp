#include <iostream>
#include <queue>
#include <vector>

using namespace std;

template <typename T> struct Edge {
  T dst, cost;
  Edge(int dst, int cost) : dst(dst), cost(cost) {}
  bool operator>(const Edge<T> &rhs) const { return cost > rhs.cost; }
};

const int INF = 1 << 30;

template <typename T> vector<T> dijkstra(vector<vector<Edge<T>>> tree, T src) {
  size_t V = tree.size();
  vector<T> dist = vector<T>(V, INF);
  priority_queue<Edge<T>, vector<Edge<T>>, greater<Edge<T>>> queue;

  dist[src] = 0;
  queue.push(Edge<T>(src, 0));
  while (!queue.empty()) {
    Edge<T> t = queue.top();
    queue.pop();
    int v = t.dst, cost = t.cost;

    if (dist[v] < cost) {
      continue;
    }
    for (size_t i = 0; i < tree[v].size(); i++) {
      Edge<T> e = tree[v][i];
      if (dist[v] + e.cost < dist[e.dst]) {
        dist[e.dst] = dist[v] + e.cost;
        queue.push(Edge<T>(e.dst, dist[e.dst]));
      }
    }
  }

  return dist;
}

int main(int argc, char const *argv[]) {
  int V, E, r;
  cin >> V >> E >> r;

  vector<vector<Edge<int>>> tree(V);
  for (size_t i = 0; i < E; i++) {
    int s, t, d;
    cin >> s >> t >> d;
    tree[s].push_back(Edge<int>(t, d));
  }

  vector<int> ret = dijkstra(tree, r);
  for (size_t i = 0; i < V; i++) {
    int d = ret[i];
    if (d >= INF) {
      cout << "INF" << endl;
    } else {
      cout << d << endl;
    }
  }

  return 0;
}


