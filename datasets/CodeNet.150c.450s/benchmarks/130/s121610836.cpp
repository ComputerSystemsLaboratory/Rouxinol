#include <iostream>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  int mat[n][m];
  REP(i,n){
    REP(j,m){
      cin >> mat[i][j];
    }
  }
  int b[m];
  REP(i,m){
    cin >> b[i];
  }
  int ans=0;
  REP(i,n){
    REP(j,m){
      ans+= mat[i][j]*b[j];
    }
    cout << ans << endl;
    ans =0;
  }
  }