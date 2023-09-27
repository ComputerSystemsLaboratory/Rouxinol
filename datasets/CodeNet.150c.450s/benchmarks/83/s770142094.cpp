#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define ALL(a) (a).begin(),(a).end()
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

using namespace std;

int main(){

  int n,w;

  cin >> n >> w;
  vector<vector<int>> dp(n+1,vector<int>(w+1,0));
  vector<pair<int,int>> nap(n);
  REP(i,n)cin >> nap[i].first >> nap[i].second;
  
  for(int i=1;i<n+1;i++)
    REP(j,w+1){
      if(j-nap[i-1].second>=0){
	dp[i][j] = max(dp[i-1][j-nap[i-1].second]+nap[i-1].first,dp[i-1][j]);
      }else{
	dp[i][j] = dp[i-1][j];
      }
    }
  /*    REP(i,n+1){
    REP(j,w+1)
      cout << dp[i][j] << " ";
    cout << endl;
    }*/
  cout << dp[n][w] << endl;
		 
  return 0;
}