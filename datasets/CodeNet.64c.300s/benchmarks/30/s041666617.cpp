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

int dp[1100]={};
int a[10]={1,5,10,50,100,500};

void f(int n){
  int k = 1000-n;
  cout<<dp[k]<<endl;
}

int main(){
  int n;
  fill(dp,dp+1100,inf);
  dp[0]=0;
  rep(i,1100){
    rep(j,6){
      if(i-a[j]<0) continue;
      dp[i]=min(dp[i],dp[i-a[j]]+1);
    }
  }
  while(1){
    cin>>n;
    if(n==0) break;
    f(n);
  }
}
