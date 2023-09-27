#include<bits/stdc++.h>
#include<string>
#include<cctype>
#include<cmath> 
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
 
int main(){
  int n,i,j;
  cin >> n;
  int u[n];
  int k[n];
  int G[n][n];

  rep(i,n){
    rep(j,n){
      G[i][j]=0;
    }
  }
   
  rep(i,n){
    cin >> u[i] >> k[i];
    int v=k[i];
    int v2[v];
    rep(j,v){
      cin >> v2[j];
      G[u[i]-1][v2[j]-1]=1;
    }
  }

  
  rep(i,n){
    rep(j,n-1){
      cout << G[i][j] <<' ';
    }
    cout << G[i][n-1] << '\n';
  }

  return 0;
}