#include <iostream>
#define rep(i,n) for(int i = 0 ; i < n ; i++)

using namespace std;

int G[100][100];

int main(){
  int V;

  cin >> V;

  rep(i,V){
    int u,k,v;

    cin >> u >> k;
    rep(j,k){
      cin >> v;
      G[u-1][v-1] = 1;
    }
  }

  rep(i,V){
    rep(j,V){
      if(j == V-1) cout << G[i][j] << endl;
      else cout << G[i][j] << " ";
    }
  }

  return 0;
}