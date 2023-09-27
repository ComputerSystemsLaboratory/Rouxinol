#include<bits/stdc++.h>
using namespace std;
#define inf 1e9
#define ll long long
#define ull unsigned long long
#define M 1000000007
#define P pair<int,int>
#define PLL pair<ll,ll>
#define FOR(i,m,n) for(int i=(int)m;i<(int)n;i++)
#define RFOR(i,m,n) for(int i=(int)m;i>=(int)n;i--)
#define rep(i,n) FOR(i,0,n)
#define rrep(i,n) RFOR(i,n,0)
#define all(a) a.begin(),a.end()
#define IN(n,a) rep(i,n){ cin>>a[i]; }
const int vx[4] = {0,1,0,-1};
const int vy[4] = {1,0,-1,0};
#define PI 3.14159265


void f(){
  string x,y;
  cin>>x>>y;
  int dp[1100][1100]={};
  
  rep(i,x.length()+1){
    rep(j,y.length()+1){
      if(i==0||j==0) continue;
      if(x[i-1]==y[j-1]) dp[i][j]=dp[i-1][j-1]+1;
      else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        
      
    }
  }

  cout<<dp[(int)x.length()][(int)y.length()]<<endl;
}


int main(){
  int q;
  cin>>q;
  while(q--){
    f();
  }
}
