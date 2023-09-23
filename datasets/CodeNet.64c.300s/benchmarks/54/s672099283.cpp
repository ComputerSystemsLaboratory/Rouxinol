#include <iostream>

using namespace std;

typedef long long llong;
llong dp[101][21];
// dp[今の項数][今の和の数]
// 初期化できるし関数使うからグローバル
llong nums[101];
// 送るのなんか面倒い
int n;

llong solve_dp(void){

  dp[0][nums[0]] = 1;
  // nums[0] になるのは必ず１通り

  for( int j = 0 ; j < n - 1 ; j++ ){
    for( int i = 0 ; i < 21 ; i++ ){
      if( i + nums[j + 1] <= 20 )
	dp[j + 1][i + nums[j + 1]] += dp[j][i];
      if( i - nums[j + 1] >= 0 )
	dp[j + 1][i - nums[j + 1]] += dp[j][i];
    } 
  }
  return dp[n - 2][nums[n - 1]];
}

int main(void){

  cin >> n;
  for( int i = 0 ; i < n ; i++ )
    cin >> nums[i];

  cout << solve_dp() << endl;

  return 0;
}