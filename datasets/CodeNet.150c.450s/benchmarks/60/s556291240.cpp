#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
int main(){
  int n;
  int v[100][100]={};
  int u,k,a;
  cin >> n;
  rep(i,n){
    cin >> u >> k;
    u--;
    rep(j,k){
      cin >> a;
      a--;
      v[u][a]=1;
    }
  }
  rep(i,n){
    rep(j,n){
      if(j>0) cout << " " << v[i][j];
      else cout << v[i][j];
    }
    cout << endl;
  }
  return 0;
}

