#include<bits/stdc++.h>
using namespace std;
static const int INF=1000000;
int n;
int G[100][100];
int d[100];
int color[100];

void dijkstra(){
  int minv;
  for(int i=0;i<n;i++){
    d[i]=INF;
    color[i]=0;
  }
  
  color[0]=1;
  d[0]=0;
  
  while(1){
    minv=INF;
    int u=-1;
    for(int i=0;i<n;i++){
      if(minv>d[i] && color[i] !=2){
        u=i;
        minv=d[i];
      }
    }
    if(u==-1) break;
    color[u]=2;
    
    for(int v=0;v<n;v++){
      if(color[v]!=2 &&G[u][v] !=INF){
        if(d[v]>d[u]+G[u][v]){
          d[v]=d[u]+G[u][v];
          color[v]=1;
        }
      }
    }
  }
  
  for(int i=0;i<n;i++){
    cout<<i<<" "<<d[i]<<endl;
  }
}

int main(){
  cin>>n;
  int u,k,v,c;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      G[i][j]=INF;
    }
  }
  
  for(int i=0;i<n;i++){
    cin>>u>>k;
    for(int i=0;i<k;i++){
      cin>>v>>c;
      G[u][v]=c;
    }
  }
  
  dijkstra();
  return 0;
}

      
  
