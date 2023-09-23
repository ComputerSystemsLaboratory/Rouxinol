#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#define lol(i,n) for(int i=0;i<n;i++)
#define mod 1000000007
typedef long long ll;
using namespace std;
ll dp[50][50];
int main(){
  int n=47,m;
  while(cin>>m&&m){
    lol(i,n)lol(j,n)dp[i][j]=(i==j?0:mod);
    lol(i,m){
      ll a,b,c;cin>>a>>b>>c;
      dp[a][b]=c;
      dp[b][a]=c;
    }
    lol(k,n)lol(i,n)lol(j,n){
      dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
    }
    ll mini=mod,pnt;
    lol(i,n){
      ll sum=0,cnt=0;
      lol(j,n)if(dp[i][j]!=mod)sum+=dp[i][j],cnt++;
      if(sum<mini&&cnt>1)mini=sum,pnt=i;
    }
    cout<<pnt<<" "<<mini<<endl;
  }
  return 0;
}