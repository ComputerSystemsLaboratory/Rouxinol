#include<iostream>
using namespace std;
int dp[50];
int fibonacci(int x){
  if(x==0 || x==1) return 1;
  if(dp[x]!=0) return dp[x];
  return dp[x]=fibonacci(x-1)+fibonacci(x-2);
}
int main(){
  int n;
  cin>>n;
  cout<<fibonacci(n)<<endl;
  return 0;
}