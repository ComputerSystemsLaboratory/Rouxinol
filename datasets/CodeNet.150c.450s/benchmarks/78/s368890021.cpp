#include <bits/stdc++.h>

using namespace std;

#define INF 1 << 25

int dp[1500000];
int dp2[1500000];

int main()
{
  int n;
  int tetra[200];
  for(int i = 0; i < 200; i++) tetra[i] = (i+1)*(i+2)*(i+3)/6;
  for(int i = 0; i < 1500000; i++) dp[i] = dp2[i] = INF;
  dp[0] = dp2[0] = 0;
  for(int i = 0; i < 200; i++){
    dp[tetra[i]] = 1;
    if(tetra[i]%2 == 1) dp2[tetra[i]] = 1;
  }
  for(int i = 0; i < 200; i++){
    for(int j = 0; j + tetra[i] <= 1000000; j++){
      dp[j+tetra[i]] = min(dp[j+tetra[i]], dp[j] + dp[tetra[i]]);
      if(tetra[i]%2) dp2[j+tetra[i]] = min(dp2[j+tetra[i]], dp2[j] + dp2[tetra[i]]);
    }
  }
  while(cin >> n, n){
    cout << dp[n] << " " << dp2[n] << endl;
  }
  return 0;
}