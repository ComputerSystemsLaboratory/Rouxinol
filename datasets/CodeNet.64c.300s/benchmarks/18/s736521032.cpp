#include <iostream>
#include <cstring>
using namespace std;

typedef long Int;

Int dp[100];

Int solve(Int n){
  Int rtn = 0;
  if(dp[n] != -1){
    rtn = dp[n];
  } else {
    if(n < 0){
      rtn = 0;
    } else if(n == 0){
      rtn = 1;
    } else {
      rtn = 0;
      rtn += solve(n-1);
      rtn += solve(n-2);
      rtn += solve(n-3);
    }
    dp[n] = rtn;
  }
  return rtn;
}


int main(void){
  memset(dp,-1,sizeof(dp));
  Int n;
  while(cin >> n , n){
    cout << solve(n)/10/365 + 1 << endl;
  }
  return 0;
}