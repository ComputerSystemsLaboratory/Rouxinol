#include <iostream>
using namespace std;
int fibonacci(int);
int dp[45];
int main(){
  int n,result,i;
  for(i=0;i<45;i++) dp[i]=0;
  cin >> n;
  result=fibonacci(n);
  cout << result << endl;
  return 0;
}
int fibonacci(int n){
  if(n==0||n==1) return dp[n]=1;
  if(dp[n]!=0) return dp[n];
  return dp[n]=fibonacci(n-1)+fibonacci(n-2);
}