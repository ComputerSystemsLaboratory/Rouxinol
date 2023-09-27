#include<bits/stdc++.h>
#define ll long long
using namespace std;

int v,e;
ll dp[101][101];
const ll inf=9999999999;

int main(){
 ios::sync_with_stdio(false);
 cin.tie(0);
 cin>>v>>e;
 for(int i=0;i<101;i++)for(int j=0;j<101;j++)if(i!=j)dp[i][j]=inf;
 for(int i=0;i<e;i++){
  int a,b,c;cin>>a>>b>>c;
  dp[a][b]=c;
 }
 for(int k=0;k<v;k++){
  for(int i=0;i<v;i++){
   if(dp[i][k]==inf)continue;
   for(int j=0;j<v;j++){
    if(dp[k][j]==inf)continue;
    dp[i][j]=min(dp[i][k]+dp[k][j],dp[i][j]);
   }
  }
 }
 for(int i=0;i<v;i++)if(dp[i][i]<0){cout<<"NEGATIVE CYCLE"<<"\n";return 0;}
 for(int i=0;i<v;i++){
  for(int j=0;j<v;j++){
   if(dp[i][j]!=inf)cout<<dp[i][j];
   else cout<<"INF";
   if(j!=v-1)cout<<" ";
  }
  cout<<"\n";
 }
}