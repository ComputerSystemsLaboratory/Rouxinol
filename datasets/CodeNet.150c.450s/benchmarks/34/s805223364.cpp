#include<iostream>

using namespace std;
int dp[31] ={1,2,4},step;
int main(){
  for(int i=3;i<31;i++){
    dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
  }
  while(cin>>step,step){
    cout<<(dp[step-1])/3650+1<<endl;
  }
  
  return 0;
}