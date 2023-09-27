#include<iostream>
#define MAX 101
#define INF (2<<29)
using namespace std;
int main(){
  int n;
  cin>>n;
  int graph[MAX][MAX];
  
  for(int i=1;i<n+1;i++){
    for(int j=1;j<n+1;j++){
      cin>>graph[i][j];
      if(graph[i][j]==-1)graph[i][j]=INF;
    }
  }
  
  int visited[MAX];
  int min[MAX];
  for(int i=1;i<n+1;i++){
    visited[i]=0;
    min[i]=INF;
  }
  
  min[1]=0;
  int ans=0;
  while(true){
    int a=-1;
    for(int i=1;i<n+1;i++){
      if(visited[i]==0&&(a==-1||min[i]<min[a]))a=i;
    }

    if(a==-1)break;
    visited[a]=1;
    ans +=min[a];

    for(int i=1;i<n+1;i++){
      min[i]=min[i]<graph[a][i] ? min[i]:graph[a][i];
    }
  }
  cout<<ans<<endl;
  return 0;
}  