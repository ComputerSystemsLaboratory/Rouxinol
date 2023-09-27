#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
int N,W;
int vx[]={1,0,-1,0};
int vy[]={0,1,0,-1};
using namespace std;
int dp[101][10001]={};
//dp[i][j] i???????????§??§j?????????????¶???????????????§??????
int w[101]={},v[101]={};
void solve(){
  cin >> N >> W ;
  FOR(i,1,N+1){
    cin >>v[i]>>w[i];
  }
  REP(i,N+1){
    REP(j,W+1){
      if(i<=0 || j<=0) dp[i][j]=0;
      else if (j-w[i]>=0)dp[i][j] = max (v[i]+ dp[i-1][j-w[i]],dp[i-1][j]);
      else dp[i][j]= dp[i-1][j];
    }
  }

  cout << dp[N][W]<<endl;



}


int main(){
solve();
}