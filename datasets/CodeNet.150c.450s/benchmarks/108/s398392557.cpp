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

V<int> dist;
V<V<int>> graph;

int main() {
  int n;
  cin >> n;

  graph.resize(n);
  dist.resize(n, -1);

  rep(i, n) {
    int u, k;
    cin >> u >> k;
    u--;

    rep(j, k) {
      int adj;
      cin >> adj;
      adj--;
      graph[u].push_back(adj);
    }

    dist[i] = -1;
  }


  queue<int> will;
  dist[0] = 0;
  will.push(0);

  while(!will.empty()) {
    int current_i = will.front();
    will.pop();

    for(auto next_i : graph[current_i]) {
      if(dist[next_i] != -1) {
        continue;
      }
      dist[next_i] = dist[current_i] + 1;
      will.push(next_i);
    }
  }


  rep(i, n) {
    cout << i + 1 << " " << dist[i] << endl;
  }
}
