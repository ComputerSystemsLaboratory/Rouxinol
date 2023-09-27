
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<string>
#include<string.h>
#include<stack>
#include<queue>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<stdlib.h>
#include<iomanip>

using namespace std;

#define ll long long
#define ld long double
#define EPS 0.0000000001
#define INF 1e9
#define MOD 1000000007
#define rep(i,n) for(i=0;i<n;i++)
#define loop(i,a,n) for(i=a;i<n;i++)
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)
#define int ll
typedef vector<int> vi;
typedef pair<int,int> pii;

signed main(void) {
  int i,j;
  int a,b;
  while(1){
    cin>>a>>b;
    if(a==0 && b==0)break;
    vector<vi> dp(a,vi(b,0));
    int n;
    cin>>n;
    rep(i,n){
      int x,y;
      cin>>x>>y;
      x--;y--;
      dp[x][y]=-1;
    }
    rep(i,a)rep(j,b)if(dp[i][j]>=0){
      if(i==0 && j==0)
	dp[i][j]=1;
      else if(i==0){
	if(dp[i][j-1]==-1)dp[i][j]=0;
	else dp[i][j]=dp[i][j-1];
      }else if(j==0){
	if(dp[i-1][j]==-1)dp[i][j]=0;
	else dp[i][j]=dp[i-1][j];
      }else{
	dp[i][j]=0;
	if(dp[i][j-1]>0)dp[i][j]+=dp[i][j-1];
	if(dp[i-1][j]>0)dp[i][j]+=dp[i-1][j];
      }
 
    }
    cout<<dp[a-1][b-1]<<endl;
  }
}