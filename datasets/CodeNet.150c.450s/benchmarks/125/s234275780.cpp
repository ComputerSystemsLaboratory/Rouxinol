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

int main() {
  int n;
  V<V<int>> graph;
  cin >> n;
  graph.resize(n);

  rep(i, n) {
    int u, k;
    cin >> u >> k;
    graph[u - 1].resize(k);

    rep(j, k) {
      cin >> graph[u - 1][j];
      graph[u - 1][j]--;
    }
  }

  stack<int> way;

  V<bool> visited(n, false);
  V<int> arrived_t(n, 0);
  V<int> finished_t(n, 0);

  int t = 0;
  rep(i, n) {
    if(visited[i]) {
      continue;
    }
    visited[i] = true;
    arrived_t[i] = ++t;
    way.push(i);

    while(!way.empty()) {
      int current_i = way.top();

      int next_i = -1;
      rep(i, graph[current_i].size()) {
        int tmp_next_i = graph[current_i][i];
        if(!visited[tmp_next_i]) {
          next_i = tmp_next_i;
          break;
        }
      }

      t++;
      if(next_i != -1) {
        visited[next_i] = true;
        arrived_t[next_i] = t;
        way.push(next_i);
      } else {
        way.pop();
        finished_t[current_i] = t;
      }
    }
  }


  rep(i, n) {
    cout << i + 1 << " " << arrived_t[i] << " " << finished_t[i] << endl;;
  }

}

