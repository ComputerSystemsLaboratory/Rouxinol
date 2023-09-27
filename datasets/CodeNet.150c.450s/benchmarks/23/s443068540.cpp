// ???????¨???????
#include <bits/stdc++.h>
using namespace std;

long long dp[101];

long long fib(long long n){
  
  dp[0] = 1;
  dp[1] = 1;

  for(int i=2;i<=n;++i) dp[i] = dp[i-1] + dp[i-2];

  return dp[n];
}

int main(){

  long long n;

  cin>>n;

  memset(dp,0,101);

  cout<<fib(n)<<endl;

  return EXIT_SUCCESS;
}