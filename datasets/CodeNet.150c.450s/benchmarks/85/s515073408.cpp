#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, s, e) for (int i = (int)(s); i <= (int)(e); i++)
#define printYesNo(is_ok) puts(is_ok ? "Yes" : "No");
#define SORT(v) sort(v.begin(), v.end());
#define RSORT(v) sort(v.rbegin(), v.rend());
#define REVERSE(v) reverse(v.begin(), v.end());

template <typename T>
void printlnVector(T v)
{
  rep(i, v.size())
  {
    cout << v[i] << endl;
  }
}

template <typename T>
void printVector(T v)
{
  rep(i, v.size())
  {
    cout << v[i] << " ";
  }
  cout << endl;
}

long long calcurate_cost(pair<long long, long long> M1, pair<long long, long long> M2)
{
  return M1.first * M1.second * M2.second;
}

pair<long long, long long> product_M(pair<long long, long long> M1, pair<long long, long long> M2)
{
  return make_pair(M1.first, M2.second);
}

int main()
{
  int n;
  cin >> n;
  vector<long long> M(n + 1);
  rep(i, n)
  {
    cin >> M[i] >> M[i + 1];
  }

  vector<vector<long long>> dp(n, vector<long long>(n, INT64_MAX));

  rep(i, n)
  {
    dp[i][i] = 0;
  }
  rep(i, n - 1)
  {
    dp.at(i).at(i + 1) = M[i] * M[i + 1] * M[i + 2];
  }

  for(int step = 2; step < n; step++)
  {
    for(int l = 0; l + step < n; l++)
    {
      int r = l + step;

      for(int c = l; c < r; c++)
      {
        long long cost = M[l] * M[c + 1] * M[r + 1];
        dp[l][r] = min(dp[l][r], dp[l][c] + dp[c + 1][r] + cost);
      }
    }
  }

  long long ans = dp[0][n - 1];
  cout << ans << endl;
  return 0;
}
