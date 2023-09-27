#include<iostream>
using namespace std;

int main(){
  int dp[51];
  int num;
  cin>>num;
  dp[0]=1;
  dp[1]=1;
  for(int i=2;i<=num;i++) dp[i]=dp[i-1]+dp[i-2];
  cout<<dp[num]<<endl;
 return 0;
}