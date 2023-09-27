#include<bits/stdc++.h>
using namespace std;

int n;
int num[110];
long long int dp[110][21];
long long int ans = 0;
int main()
{
  cin >> n;
  for(int i = 1; i <= n; i++)
    cin >> num[i];

  dp[1][num[1]] = 1;
  for(int i = 2; i <= n - 1; i++)
    for(int j = 0; j <= 20; j++){
      if(j + num[i] <= 20)
	dp[i][j] += dp[i - 1][j + num[i]];
      if(j - num[i] >= 0)
	dp[i][j] += dp[i - 1][j - num[i]];
    }


  cout << dp[n - 1][num[n]] << endl;
  return 0;
}