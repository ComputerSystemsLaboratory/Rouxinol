#include<cstdio>
#include<algorithm>
using namespace std;

#define INF (1<<29)

int graph[11][11];

void wa(int m){

  for(int i=0;i<=m;i++){
    for(int j=0;j<=m;j++){
      for(int k=0;k<=m;k++){
	graph[j][k] = min(graph[j][k],graph[j][i]+graph[i][k]);
      }
    }
  }
  
}

int main(){
  int m,n,a,b,c;
  
  while(scanf("%d",&n),n!=0){
    
    m=0;
    fill_n(*graph,11*11,INF);
    
    for(int i=0;i<n;i++){
      scanf("%d %d %d",&a,&b,&c);
      graph[a][b]=c;
      graph[b][a]=c;
      m = max(m,max(a,b));
    }
    
    for(int i=0;i<=m;i++) graph[i][i]=0;
    wa(m);
    
    int num,sum,ans=INF;
    for(int i=0;i<=m;i++){
      sum=0;
      for(int j=0;j<=m;j++) sum = graph[i][j]==INF?INF:sum+graph[i][j];
      if(sum < ans){
	num = i;
	ans = sum;
      }
    }
    printf("%d %d\n",num,ans);
  }
  return(0);
}

