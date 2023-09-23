#include <iostream>

using namespace std;

int main(){
  int n; cin >> n;
  int adj[n+1][n+1];
  for(int i=1;i<=n;i++){
    int u,k; cin >> u >> k;
    for(int i=1;i<=n;i++) adj[u][i]=0;
    for(int i=0;i<k;i++){
      int v; cin >> v;
      adj[u][v]=1;
    }
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(j-1) cout << " " << adj[i][j];
      else cout << adj[i][j];
    }
    cout << endl;
  }
}