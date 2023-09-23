#include <iostream>
#include <string.h>
using namespace std;
typedef long long int ll;

int main(){
  int n;
  int a[100];
  ll dp[100][21];

  cin >> n;
  memset(dp,0,sizeof(dp));
  for(int i = 1 ; i <= n ; i++)cin >> a[i];
  a[0]=0;
  dp[1][a[1]] = 1;

  for(int i = 2 ; i < n ; i++ ){
    for(int j = 0 ; j <= 20  ; j++ ){
      if( j + a[i] <= 20 ){
	dp[i][j + a[i]] += dp[i - 1][j]; 
      }
      if(j - a[i] >= 0){
	dp[i][ j - a[i]] += dp[i - 1][j];
      }
    }
  }
  cout << dp[n-1][a[n]] << endl;
}