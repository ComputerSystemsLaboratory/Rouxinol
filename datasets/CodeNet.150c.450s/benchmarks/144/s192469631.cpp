#include <iostream>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
  int n,m,l;
  cin >> n >> m >> l;
  long long mat1[n][m],mat2[m][l],ans[n][l];
  REP(i,n){
    REP(j,m){
      cin >> mat1[i][j];
    }
  }
  REP(i,m){
    REP(j,l){
      cin >> mat2[i][j];
    }
  }
  //行列の計算
  REP(i,n){
    REP(j,l){
      ans[i][j]=0;
      REP(k,m){
        ans[i][j] +=mat1[i][k]*mat2[k][j];
      }
    }
  }

  REP(i,n){
    REP(j,l){
      cout << ans[i][j];
      if(j==l-1)
        cout << endl;
      else
        cout <<' ';
    }
  }
}