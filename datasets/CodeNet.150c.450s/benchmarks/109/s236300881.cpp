#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
  int n;
  int h1,h2,m1,m2,s1,s2;
  int dp[3600*60+1];
  while(cin >> n, n){
    memset(dp, 0, sizeof(dp));
    for(int i = 0 ; i < n ; i++){
      scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
      int t1 = h1*3600+m1*60+s1, t2 = h2*3600+m2*60+s2;
      dp[t1]++, dp[t2]--;
    }
    int ans = 0;
    for(int i = 1 ; i <= 3600*60 ; i++){
      dp[i] = dp[i-1]+dp[i];
      ans = max(ans, dp[i]);
    }
    cout << ans << endl;
  }
  return 0;
}

    
      