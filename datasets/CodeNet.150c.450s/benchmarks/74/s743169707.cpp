#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int solve(int price, vector<int> coins)
{
  vector<int> dp(price + 5, INF);
  int n = coins.size();
  dp[0] = 0;
  for (int p = 1; p <= price; ++p) {
    for (int i = 0; i < n; ++i) {
      if (coins[i] <= p) {
        dp[p] = min(dp[p], dp[p - coins[i]] + 1);
      }
    }
  }
  return dp[price];
}

int main()
{
  int price = 0, kinds = 0;
  fscanf(stdin, "%d %d", &price, &kinds);
  vector<int> coins(kinds, 0);
  for (int i = 0; i < kinds; ++i) {
    fscanf(stdin, "%d", &coins[i]);
  }
  sort(coins.begin(), coins.end());
  int ans = solve(price, coins);
  fprintf(stdout, "%d", ans);
  fprintf(stdout, "\n");
  return 0;
}