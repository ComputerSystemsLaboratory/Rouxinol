#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
const int INF=2000000000;
const int MAX_V=100;
int V,E;
int G[MAX_V][MAX_V];
int dp[MAX_V][MAX_V];
int min(int a,int b){
  if(a>b)return b;
  else return a;
}
void warshall_floyd(){
  for(int k=0;k<V;k++){
    for(int j=0;j<V;j++){
      for(int i=0;i<V;i++){
	if(dp[i][k]!=INF && dp[k][j]!=INF)dp[i][j]=min(dp[i][j] , dp[i][k]+dp[k][j]);
      }
    }
  }
}

int main(){
  scanf("%d %d",&V,&E);
  
  fill(dp[0],dp[0]+10000,INF);
  for(int i=0;i<E;i++){
    int s,t,c;
    scanf("%d %d %d",&s,&t,&c);
    dp[s][t]=c;
  }
  for(int i=0;i<V;i++)dp[i][i]=0;
  warshall_floyd();
  for(int i=0;i<V;i++){
    if(dp[i][i]<0){printf("NEGATIVE CYCLE\n");
      return 0;
    }
  }
  for(int i=0;i<V;i++){
    for(int j=0;j<V;j++){
      if(dp[i][j]==INF)printf("INF");
      else printf("%d",dp[i][j]);
      if(j<V-1)printf(" ");
    }
    printf("\n");
  }
  return 0;
}