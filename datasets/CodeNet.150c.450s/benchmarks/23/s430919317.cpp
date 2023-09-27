#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  vector<ll> dp(50, 1);
  int n = 0;
  fscanf(stdin, "%d", &n);
  for (int i = 2; i <= n; ++i) {
    dp[i] = dp[i - 2] + dp[i - 1];
  }
  fprintf(stdout, "%lld\n", dp[n]);
  return 0;
}