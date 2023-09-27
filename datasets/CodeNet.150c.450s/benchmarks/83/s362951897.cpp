#include <iostream>
using namespace std;
int dp[101][10001];

int main(){
  int N, W;
  int val[100], wei[100];
  cin >> N >> W;
  for(int i = 0; i < N; i++)
    cin >> val[i] >> wei[i];
  for(int i = 1; i <= N; i++){
    for(int j = 1; j <= W; j++){
	dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      if(j >= wei[i - 1])
	dp[i][j] = max(dp[i][j], dp[i - 1][j - wei[i - 1]] + val[i - 1]);
    }
  }
  cout << dp[N][W] <<endl;
  return 0;
}