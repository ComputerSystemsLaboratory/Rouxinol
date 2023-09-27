// GRL_2_B SSSP (Negative Edges) - Bellman-Ford
/* Constraints
 * 1 ≤ |V| ≤ 1000
 * 0 ≤ |E| ≤ 2000
 * -10000 ≤ di ≤ 10000
 */

#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

#define INF 11000000

int main() {
  int n, m, source;
  cin >> n >> m >> source;
  map<int, int> adj[n];
  for (int src, dst, cost; cin >> src >> dst >> cost;) {
    adj[dst][src] = cost; // storing Grev
  }

  // dp[k][u] = shortest u-s path in Grev with at most k edges
  int dp[1001][1000];
  for (auto ar : dp)
    fill(ar, ar + 1000, INF);
  dp[0][source] = 0;

  // dp[k][u] = min of
  //            (1) min over out-neighbors t of u of dp[k-1][t] + cost(u -> t)
  //            (2) dp[k-1][u]
  for (int k = 1; k <= n; ++k) {
    for (int u = 0; u < n; ++u) {
      dp[k][u] = dp[k - 1][u];
      for (auto &dst_cost : adj[u]) {
        int t = dst_cost.first;
        int cost = dst_cost.second;
        if (dp[k - 1][t] != INF)
          dp[k][u] = min(dp[k][u], dp[k - 1][t] + cost);
      }
    }
  }

  for (int u = 0; u < n; ++u) {
    if (dp[n][u] < dp[n - 1][u]) {
      cout << "NEGATIVE CYCLE\n";
      exit(0);
    }
  }

  for (int u = 0; u < n; ++u) {
    if (dp[n - 1][u] == INF)
      cout << "INF\n";
    else
      cout << dp[n - 1][u] << endl;
  }
}
