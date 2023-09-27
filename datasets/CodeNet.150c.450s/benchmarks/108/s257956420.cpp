#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define MAX 101

int d[MAX],visited[MAX];
vector<int> G[MAX];
queue<int> Q;

int main(){
  int n; cin >> n;
  for(int i=0;i<n;i++){
    int u,k; cin >> u >> k;
    for(int i=0;i<k;i++){
      int v; cin >> v;
      G[u].push_back(v);
    }
  }
  //bread first search
  for(int i=1;i<=n;i++){
    visited[i]=0;
    d[i]=-1;
  }
  visited[1]=1;
  d[1]=0;
  Q.push(1);
  while(!(Q.empty())){
    int u=Q.front(); Q.pop();
    for(int v=0;v<G[u].size();v++){
      if(visited[G[u][v]]==0){
        visited[G[u][v]]=1;
        d[G[u][v]]=d[u]+1;
        Q.push(G[u][v]);
      }
    }
  }
  for(int i=1;i<=n;i++){
    cout << i << " " << d[i] << endl;
  }
}