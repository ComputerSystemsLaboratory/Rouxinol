#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define INF 1e9

int main(){
  int n;

  cin >> n;
  vector<int> r(n),c(n),p;
  for(int i = 0 ; i < n ; i++){
    cin >> r[i] >> c[i];
  }

  p.push_back(r[0]);
  for(int i = 0 ; i < n ; i++){
    p.push_back(c[i]);
  }

  int dp[n+1][n+1];
  for(int i = 0 ; i <= n ; i++){
    dp[i][i] = 0;
  }

  for(int l = 2 ; l <= n ; l++){
    for(int i = 1 ; i <= n-l+1 ; i++){
      int j = i + l - 1;
      dp[i][j] = INF;
      for(int k = i ; k <= j-1 ; k++){
	int cost = dp[i][k] + dp[k+1][j] + p[i-1]*p[j]*p[k];
	dp[i][j] = min(dp[i][j],cost);
      }
    }
  }

  cout << dp[1][n] << endl;

  return 0;
}