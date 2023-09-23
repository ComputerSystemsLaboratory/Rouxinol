#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
  int N;
  ll dp[35] = {1,1,2,4};
  for(int i = 4 ; i < 35 ; i++){
    dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
  }
  while(cin >> N,N){
    cout << dp[N]/365/10+1 << endl;
  }
  return 0;
}