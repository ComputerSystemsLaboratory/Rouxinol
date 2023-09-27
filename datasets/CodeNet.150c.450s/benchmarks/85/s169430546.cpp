#include <bits/stdc++.h>
using namespace std;
typedef long long llong;
#define MAX 100
#define INFTY 9999999

// 行列群を保持しておく
vector<int> vecMtr(MAX);
vector<vector<int>> dp(MAX,vector<int>(MAX));

int
MultipleMatrixChain(int size)
{
  for (int i = 1; i < size; i++)
  {
    dp[i][i] = 0;
  }
  
  for (int l = 2; l <= size; l++)
  {
    for (int i = 1; i <= size-l+1; i++)
    {
      int j = i + l - 1;
      dp[i][j] = INFTY;
      for (int k = i; k <= j-1; k++)
      {
        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j]+ vecMtr[i-1]*vecMtr[k]*vecMtr[j]);
      }
    }
  }
  return dp[1][size];
}

int main() {
  int n;
  cin >> n;
  
  int r = 0;
  int c = 0;

  for (int i = 1; i <= n; i++)
  {
      cin >> r >> c;
      vecMtr[i-1] = r;
      vecMtr[i] = c;
  }
  
  cout << MultipleMatrixChain(n) << "\n";
}
