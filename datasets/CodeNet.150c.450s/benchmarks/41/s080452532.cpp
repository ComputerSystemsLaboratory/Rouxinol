#include <bits/stdc++.h>
using namespace std;

// ワーシャル・フロイド法
// 負の辺があっても動作する。

//#define UNDIRECTED // 無向グラフ

constexpr int MAX_V = 100;
constexpr int MAX_D = 2e7;
constexpr int INF = MAX_D * MAX_V + 7; // D * V より大きい値

int V;
int dp[MAX_V][MAX_V];

void initialize() {
  fill_n(&dp[0][0], MAX_V * MAX_V, INF);
  for (int i{}; i < MAX_V; ++i) dp[i][i] = 0;
}

bool warshall_floyd() {
  for (int k{}; k < V; ++k) {
    for (int i{}; i < V; ++i) {
      for (int j{}; j < V; ++j) {
        if (dp[i][k] != INF && dp[k][j] != INF) {
          dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
        }
      }
      if (dp[i][i] < 0) {
        return false;
      }
    }
  }

  return true;
}

int main() {
  initialize();

  int E;
  cin >> V >> E;
  for (int i{}; i < E; ++i) {
    int s, t, d;
    cin >> s >> t >> d;
    dp[s][t] = d;
#ifdef UNDIRECTED
    dp[t][s] = d;
#endif
  }

  if (!warshall_floyd()) {
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  }

  for (int i{}; i < V; ++i) {
    for (int j{}; j < V; ++j) {
      cout << (j > 0 ? " " : "") << (dp[i][j] < INF ? to_string(dp[i][j]) : "INF");
    }
    cout << endl;
  }

  return 0;
}

