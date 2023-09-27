#include<bits/stdc++.h>
using namespace std;
const long long INF = 1LL << 32;
int main(){
  int n;
  long long dp[105][105];
  int e,u,v,c;
  cin>>n>>e;
  //dpの初期化
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      //iとjが等しければコストは0
      dp[i][j]=((i==j)?0:INF);
    }
  }  

  for(int i=0;i<e;i++){
    cin>>u>>v>>c;
    dp[u][v]=c;
  }

  //ここから更新
  for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
      if(dp[i][k]==INF) continue;
      for(int j=0;j<n;j++){
        if(dp[k][j]==INF) continue;
        dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
      }
    }
  }
  
  //負の経路の検出
  bool negative=false;
  for(int i=0;i<n;i++) if(dp[i][i]<0) negative=true;

  if(negative){
    cout<<"NEGATIVE CYCLE"<<'\n';
  }
  else{
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(j) cout<<" ";
        if(dp[i][j]==INF) cout<<"INF";
        else cout<<dp[i][j];
      }
      cout<<'\n';
    }
  }
  return(0);
}
