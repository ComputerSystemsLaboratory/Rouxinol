#include <iostream>
using namespace std;
long long int dp[101][21];
int n;

int main(){

  int a[101] = {0};
  cin >> n;
  for(int i = 0 ; i < n ; i++){
    cin >> a[i];
  }
  dp[1][a[0]] = 1;
  for(int i = 0 ; i < n ; i++ ){
    for(int j = 0 ; j <= 20 ; j++ ){
      if(j+a[i] <= 20 ){
	dp[i+1][j+a[i]] += dp[i][j];
      }
      if(j-a[i] >= 0 ){
	dp[i+1][j-a[i]] += dp[i][j];
      }
    }
  }

  cout << dp[n-1][a[n-1]] << endl;
}