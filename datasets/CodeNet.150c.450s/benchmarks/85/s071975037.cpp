#include <bits/stdc++.h>
using namespace std;
const int64_t INF = (1 << 21);
const int64_t MAXN = 110;
int64_t DP[MAXN][MAXN];

int main()
{
  int64_t N;
  cin >> N;
  vector<int64_t> M(N + 1);
  for (int i = 1; i <= N; i++)
    cin >> M[i - 1] >> M[i];
  for (int i = 1; i <= N; i++)
    DP[i][i] = 0;
  for (int l = 2; l <= N; l++)
  {
    for (int i = 1; i <= N - l + 1; i++)
    {
      int j = i + l - 1;
      DP[i][j] = INF;
      for (int k = i; k <= j - 1; k++)
      {
        DP[i][j] = min(DP[i][j], DP[i][k] + DP[k + 1][j] + M.at(i - 1) * M.at(k) * M.at(j));
      }
    }
  }
  cout << DP[1][N] << endl;
}
