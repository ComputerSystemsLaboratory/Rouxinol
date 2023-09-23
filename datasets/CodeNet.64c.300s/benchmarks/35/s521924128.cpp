#include <iostream>
using namespace std;

int graph[101][101];
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    int u,k,v; cin>>u>>k;
    for(int j=1;j<=k;j++){
      cin>>v;
      graph[u][v]=1;
    }
  }

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(j-1) cout<<" ";
      cout<<graph[i][j];
    }
    cout<<"\n";
  }
}

