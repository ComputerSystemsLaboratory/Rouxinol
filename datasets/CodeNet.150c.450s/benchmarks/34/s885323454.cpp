#include <bits/stdc++.h>
using namespace std;

int main(){
  int dp[45] = {};



  for(int i=0;i<45;i++){
    dp[i] =0;
  }

  dp[0] = 1;

  for(int i=0;i<40;i++){
    dp[i+1] += dp[i];
    dp[i+2] += dp[i];
    dp[i+3] += dp[i];
  }

  while(1){
    int a;
    a=0;
    cin >> a;
    if(a ==0)break;
    cout << dp[a] / 3650 + 1 << endl;

  }
}

