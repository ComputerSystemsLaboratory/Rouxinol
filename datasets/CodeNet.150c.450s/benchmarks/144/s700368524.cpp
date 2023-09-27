#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

#include <bits/stdc++.h>
using namespace std;

int main(){
  ll n,m,l;
  cin>>n>>m>>l;
  
  ll A[n][m];
  ll B[m][l];
  ll C[n][l];
  rep(i,n){
    rep(j,m) cin>>A[i][j];
  }
  rep(i,m){
    rep(j,l) cin>>B[i][j];
  }
  rep(i,n){
    rep(j,l) C[i][j]=0;
  }
  
  rep(i,n){
    rep(j,l){
      rep(k,m) C[i][j]+=A[i][k]*B[k][j];
    }
  }
  
  rep(i,n){
    rep(j,l){
      if(j) cout<<" ";
      cout<<C[i][j];
    }
    cout<<endl;
  }
  
  return 0;
}
