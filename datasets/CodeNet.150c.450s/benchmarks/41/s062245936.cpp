//ワーシャルフロイド

#include<bits/stdc++.h>
using namespace std;

const int MAX=100;
const long long INF=(1LL<<32);

int n;
long long dp[MAX][MAX];

void floyd(){
  for (int k=0;k<n;k++){
    for(int i=0;i<n;i++){
      if(dp[i][k]==INF) continue;
      for(int j=0;j<n;j++){
	if(dp[k][j]==INF) continue;
	dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
	//         [i]から[j]に行く,[i]から[k]を通り、[k]から[j]に行く           
      }
    }
  }
}

int main(){
  int e,u,v,c;
  cin>>n>>e;

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      dp[i][j]=( (i==j) ? 0:INF );
      //        　 その場         
    }
  }

  for(int i=0;i<e;i++){
    cin>>u>>v>>c;
    dp[u][v]=c;//重み
  }

  floyd();

  bool nagative=false;
  
  for(int i=0;i<n;i++){
    if(dp[i][i]<0) nagative=true;
    //負の値がある
  }

  if(nagative){
    cout<<"NEGATIVE CYCLE"<<endl;

  }else{
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
	if(j) cout<<" ";
	if(dp[i][j]==INF) cout<<"INF";
	else cout<<dp[i][j];
      }
      cout<<endl;
    }
  }

  return 0;
}

