#include <bits/stdc++.h>
using namespace std;

int INF;
int n;
int es[100][100];

// sから各頂点への最短経路を求める
void dijkstra () {
  
  int minv;
  int d[100];

  // 0:未調査 1:調査中 2:調査完了
  int status[100];

  for (int i = 0; i < n; i++) {
    d[i] = INF;
    status[i] = 0;
  }

  d[0] = 0;
  status[0] = 1;

  while (1) {
    minv = INF;
    int u = -1;
    for (int i = 0; i < n; i++) {
      if (d[i] < minv && status[i] != 2) {
        u = i;
        minv = d[i];
      }
    }
    if (u == -1) {
      break;
    }
    status[u] = 2;
    for (int v = 0; v < n; v++) {
      if (status[v] != 2 && es[u][v] != INF) {
        if (d[u] + es[u][v] < d[v]) {
          d[v] = d[u] + es[u][v];
          status[v] = 1;
        }
      }
    }
  }
  for (int i = 0; i < n; i++) {
    if (d[i] == INF) {
      cout << i << " -1" << endl;
    } else {
      cout << i << " " << d[i] << endl;
    } 
  }
}

int main() {
  
  cin >> n;

  INF = 2000000;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      es[i][j] = INF;
    }
  }

  // 入力を受け取る
  for (int i = 0; i < n; i++) {
    int u, k;
    cin >> u >> k;
    for (int j = 0; j < k; j++) {
      int v, c;
      cin >> v >> c;
      es[u][v] = c;
    }
  }

  // ダイクストラ法開始
  dijkstra();

  return 0;
}
