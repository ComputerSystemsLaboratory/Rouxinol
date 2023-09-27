#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
int main(){
  int dp[50];
  dp[0]=dp[1]=1;
  for(int i=2; i<50; i++){
    dp[i] = dp[i-1]+dp[i-2];
  }
  //rep(i,50) cout << dp[i] << " ";
  int n;
  cin >> n;
  cout << dp[n] << endl;
  return 0;
}
