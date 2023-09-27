#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;


int solve(vector<int> weights, vector<int> values, int total_weight)
{
  int n = weights.size();
  vector<vector<int> > dp(n, vector<int>(total_weight + 1, 0));
  for (int i = 0; i <= total_weight; ++i) {
    if (weights[0] <= i) {
      dp[0][i] = values[0];
    }
  }
  for (int i = 1; i < n; ++i) {
    for (int w = 1; w <= total_weight; ++w) {
      int val = dp[i - 1][w];
      if (w - weights[i] >= 0) {
        val = max(val, dp[i - 1][w - weights[i]] + values[i]);
      }
      dp[i][w] = val;
    }
  }
  return dp[n - 1][total_weight];
}

int main()
{
  int N, W;
  fscanf(stdin, "%d %d", &N, &W);
  vector<int> values(N, 0);
  vector<int> weights(N, 0);
  for (int i = 0; i < N; ++i) {
    fscanf(stdin, "%d %d", &values[i], &weights[i]);
  }
  int ans = solve(weights, values, W);
  fprintf(stdout, "%d", ans);
  fprintf(stdout, "\n");
  return 0;
}