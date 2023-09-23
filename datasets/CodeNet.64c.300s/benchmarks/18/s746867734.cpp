// 0168_Kannondou.cpp
//
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MAX_N = 30;
ll dp[MAX_N+1];
int n;
int main() {
  dp[1]=1, dp[2]=2, dp[3]=4;
  for(int i=4; i<=MAX_N; ++i) {
    dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
  }

  while(cin >> n, n){
    ll day = (dp[n] + 10-1)/10;
    ll year = (day + 365-1)/365;
    cout << year << endl;
  }
  return 0;
}

