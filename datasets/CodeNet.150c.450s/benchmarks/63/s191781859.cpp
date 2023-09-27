#include <bits/stdc++.h>
#define rep(i, to) for (int i = 0; i < (to); i++)
#define rrep(i, to) for (int i = (to) - 1; i >= 0; i--)
#define repf(i, from, to) for (int i = (from); i < (to); i++)
#define all(v) v.begin(), v.end()
#define unless(cond) if (!(cond))
using namespace std;
using ll = long long;
template <typename T>
using V = vector<T>;
template <typename T, typename U>
using P = pair<T, U>;

struct Node {
  int to;
  int cost;

  bool operator> (const Node &other) const {
    return cost > other.cost;
  }
};

int main() {
  int v, e;
  int r;
  cin >> v >> e >> r;

  V<V<Node>> graph(v);

  rep(i, e) {
    int s, t, d;
    cin >> s >> t >> d;
    graph[s].push_back({t, d});
  }

  int inf = 1e9;
  V<bool> seen(v, false);
  priority_queue<Node, V<Node>, greater<Node>> todo;
  V<int> dist(v, inf);
  todo.push({r, 0});
  dist[r] = 0;

  while(!todo.empty()) {
    Node current = todo.top();
    todo.pop();

    if(current.cost > dist[current.to]) {
      continue;
    }

    seen[current.to] = true;

    for(auto next : graph[current.to]) {
      if(seen[next.to]) continue;

      if(dist[current.to] + next.cost < dist[next.to]) {
        dist[next.to] = dist[current.to] + next.cost;
        todo.push({next.to, dist[next.to]});
      }
    }
  }

  rep(i, v) {
    if(dist[i] == inf) {
      cout << "INF" << endl;
    } else {
      cout << dist[i] << endl;
    }
  }
}

