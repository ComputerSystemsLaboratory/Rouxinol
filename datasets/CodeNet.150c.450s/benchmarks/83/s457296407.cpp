#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define CH(N,A,B) (A<=N&&N<B)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define RREP(i,a,b) for(int i=(b-1);a<=i;i--)

using namespace std;

int main() {

  int N,W,v[101],w[101];

  cin>>N>>W;
  REP(i,0,N) cin>>v[i+1]>>w[i+1];

  int dp[101][10001];

  REP(i,0,N+1)REP(j,0,W+1) dp[0][j] = 0;

  REP(i,1,N+1){
    REP(j,0,W+1){
      dp[i][j] = dp[i-1][j];
      if(j-w[i] >= 0) dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
    }
  }
/*
  REP(i,0,N+1){
    REP(j,0,W+1){
      cout<<dp[i][j]<<" ";
    }
    cout<<endl;
  }
*/
  cout<<dp[N][W]<<endl;

  return 0;
}