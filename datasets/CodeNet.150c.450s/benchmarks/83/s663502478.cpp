#include <bits/stdc++.h>
#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define REP1(i,n) for(int i=1; i<=(int)(n); i++)
#define SORT(v) sort(v.begin(), v.end())
#define REVERSE(v)  reverse(v.begin(), v.end())
typedef long long ll;
using namespace std;

int main() {
  int N,W; cin>>N>>W;
  int value[110],weight[110]; REP(i,N) cin>>value[i]>>weight[i];
  
  // dp[i+1][W] : i番目の品物まで、重さがWを超えないようにしながら選んだ時の価値の最大値
  int dp[110][10010];

  // 初期条件
  dp[0][0] = 0; REP1(i,W) dp[0][i] = 0;

  for(int i=0; i<N; i++) {
    for(int w=0; w<=W; w++) {
      if(w >= weight[i]) 
        dp[i+1][w] = max(dp[i][w-weight[i]] + value[i], dp[i][w]);
      else
        dp[i+1][w] = dp[i][w];
    }
  }

  cout<<dp[N][W]<<endl;
  return 0;
}
