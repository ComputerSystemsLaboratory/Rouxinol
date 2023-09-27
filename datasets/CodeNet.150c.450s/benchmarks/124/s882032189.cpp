#include <bits/stdc++.h>
using namespace std;

struct edge {
  int from, to, cost;
};


int INF;
vector<vector<edge>> es;
vector<int> dist;

bool bellmanFord (int n, int s) {
  dist[s] = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < es[j].size(); k++) {
        edge e_ = es[j][k];
        if (dist[e_.from] != INF && dist[e_.to] > dist[e_.from] + e_.cost) {
          dist[e_.to] = dist[e_.from] + e_.cost;
          // n回目にも更新があるなら、負の閉路が存在する
          if (i == n - 1) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

int main() {
  
  int n;
  cin >> n;

  INF = 2000000;
  es.resize(n);
  dist = vector<int>(n, INF);

  for (int i = 0; i < n; i++) {
    int u, k;
    cin >> u >> k;
    for (int j = 0; j < k; j++) {
      edge e;
      e.from = u;
      cin >> e.to >> e.cost;
      es[i].push_back(e);
    }
  }

  bool flg = bellmanFord(n, 0);
  
  for (int i = 0; i < n; i++) {
    cout << i << " " <<  dist[i] << endl;
  }

  return 0;
}
