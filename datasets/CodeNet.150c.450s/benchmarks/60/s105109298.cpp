#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int n;
  int g[101][101];
  fill(g[0],g[101],0);
  cin >> n;
  for(int i = 0;i < n;i++){
    int u,k;
    cin >> u >> k;
    for(int j = 0;j < k;j++){
      int v;
      cin >> v;
      g[u][v] = 1;
    }
  }
  for(int i = 1;i <= n;i++){
    cout << g[i][1];
    for(int j = 2;j <= n;j++){
      cout << ' ' << g[i][j];
    }
    cout << endl;
  }
}