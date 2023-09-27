#include<cstdio>
#include<climits>
#include<algorithm>
using namespace std;
#define INF (INT_MAX)
int main(){
  int v,e,s,t,d;
  int graph[100][100];
  fill_n(*graph,100*100,INF);
  
  scanf("%d %d",&v,&e);
  for(int i=0;i<v;i++) graph[i][i] = 0;
  for(int i=0;i<e;i++){
    scanf("%d %d %d",&s,&t,&d);
    graph[s][t] = d;
  }

  for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
      for(int k=0;k<v;k++){
	if(graph[j][i]!=INF && graph[i][k]!=INF){
	  graph[j][k] = min(graph[j][k],graph[j][i]+graph[i][k]);
	}
	if(graph[i][i]<0){
	  puts("NEGATIVE CYCLE");
	  return(0);
	}
      }
    }
  }

  for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
      printf(graph[i][j]==INF?"INF":"%d",graph[i][j]);
      putchar(j==v-1?'\n':' ');
    }
  }

  return(0);
}

