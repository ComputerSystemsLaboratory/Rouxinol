#include <iostream>
#include <vector>

#define MAX 101

using namespace std;

int visited[MAX],d[MAX],f[MAX];
int tt=0;
vector<int> G[MAX];

void dfs(int u){
  d[u]=++tt;
  visited[u]=1;
  for(int i=0;i<G[u].size();i++){
    if(visited[G[u][i]]==0) dfs(G[u][i]);
  }
  f[u]=++tt;
}

int main(){
  int n; cin >> n;
  for(int i=1;i<=n;i++) visited[i]=0;
  for(int i=0;i<n;i++){
    int u,k; cin >> u >> k;
    for(int i=0;i<k;i++){
      int v; cin >> v;
      G[u].push_back(v);
    }
  }
  for(int i=1;i<=n;i++){
    if(visited[i]==0) dfs(i);
  }
  for(int i=1;i<=n;i++){
    cout << i << " " << d[i] << " " << f[i] << endl;
  }
}