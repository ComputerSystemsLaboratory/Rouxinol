#include<iostream>
using namespace std;

int main(void){
  int n;
  int dp[31];
  dp[0] = 1;
  dp[1] = 2;
  dp[2] = 4;
  for(int i = 3 ; i < 31 ;  i ++){
    dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
  }
  while(cin>>n,n){
    cout<<1+dp[n-1]/3650<<endl;
  }
}