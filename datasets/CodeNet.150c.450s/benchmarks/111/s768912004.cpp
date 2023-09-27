#include<iostream>
  
using namespace std;
 
int main()
{
  int N, num[101];
  cin >> N;
  for(int i = 0; i < N; i++)
    cin >> num[i];
 
  long long dp[101][21] = {{0}};
  dp[0][num[0]] = 1;
  for(int i = 1; i < N-1; i++){
    for(int j = 0; j <= 20; j++){
      if(j - num[i] >= 0)
	dp[i][j - num[i]] += dp[i-1][j];
      
      if(j + num[i] <= 20)
	dp[i][j + num[i]] += dp[i-1][j];
    }
  }
 
  cout << dp[N-2][num[N-1]] << endl;

}

