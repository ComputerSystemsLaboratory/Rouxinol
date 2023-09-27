#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<cstring>

using namespace std;

int main(){

  long long inf=10000000000;

  int v,e;
  cin >> v >> e;

  long long dp[v][v];
  for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
      dp[i][j]=inf;
    }
  }

  for(int i=0;i<e;i++){
    long long s,t,d;
    cin >> s >> t >> d;
    dp[s][t]=d;
  }

  for(int i=0;i<v;i++)dp[i][i]=0;

  for(int k=0;k<v;k++){
    for(int i=0;i<v;i++){
      for(int j=0;j<v;j++){
        if(dp[i][k]==inf || dp[k][j]==inf);
        else dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
      }
    }
  }

  int a=0;
  for(int i=0;i<v;i++)if(dp[i][i]<0)a++;

  if(a!=0)cout << "NEGATIVE CYCLE" << endl;
  else{
    for(int i=0;i<v;i++){
      if(dp[i][0]==inf)cout << "INF" ;
      else cout << dp[i][0] ;
      for(int j=1;j<v;j++){
        if(dp[i][j]==inf)cout << " "<<"INF" ;
        else cout << " " <<dp[i][j]; 
      }
      cout << endl;
    }
  }




}

