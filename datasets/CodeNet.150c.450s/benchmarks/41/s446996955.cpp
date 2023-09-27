#include <bits/stdc++.h>
using namespace std;

int main() {
  
  // 大きい値を用意する
  long long INF = 1LL<<60;

  // V は頂点数
  long long V, E;
  cin >> V >> E;

  // 要素数はN + 1
  // あらかじめ INF を入れておく
  long long g[101][101];
  for (int i = 0; i < V; i++) {
    for (int j = 0; j < V; j++) {
      if (i != j) {
        g[i][j] = INF;
      } else {
        g[i][j] = 0;
      }
    }
  }

  // 頂点 s から頂点 t までの重みが d
  int s, t;
  long long d;
  for (int i = 0; i < E; i++) {
    cin >> s >> t >> d;
    g[s][t] = d;
  }

  // ワーシャルフロイドで全点間の距離を計算する
  for (int k = 0; k < V; k++) {
    for (int i = 0; i < V; i++) {
      if (g[i][k] == INF) {
        continue;
      }
      for (int j = 0; j < V; j++) {
        if (g[k][j] == INF) {
          continue;
        }
        g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
      }
    }
  }

  // 出力
  bool flg = false;
  for (int i = 0; i < V; i++) {
    if (g[i][i] < 0) {
      flg = true;
    }
  }

  if (flg) {
    cout << "NEGATIVE CYCLE" << endl;
  } else {
    for (int i = 0; i < V; i++) {
      for (int j = 0; j < V; j++) {
        if (g[i][j] == INF) {
          cout << "INF";
        } else {
          cout << g[i][j];
        }
        if (j != V - 1) {
          cout << " ";
        }
      }
      cout << endl;
    }
  }

  return 0;
}
