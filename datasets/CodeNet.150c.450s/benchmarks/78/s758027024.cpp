#include<iostream>
using namespace std;

const int N = 1000000;
int dp[2][N+1];

int main(){
  for(int i=0;i<=N;i++)dp[0][i] = dp[1][i] = N;
  dp[0][0] = dp[1][0] = 0;

  int val = 1;
  for(int i=2;val<=1000000;i++){
    for(int j=0;j+val<=1000000;j++){
      dp[0][j+val] = min(dp[0][j+val],dp[0][j] + 1);
      if(val&1)dp[1][j+val] = min(dp[1][j+val],dp[1][j] + 1);
    }
    val = i*(i+1)*(i+2)/6;
  }

  int n;
  while(cin >> n,n)cout << dp[0][n] << " " << dp[1][n] << endl;
}