//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_D
#include <iostream>
using namespace std;

int main(){

  int n,m,l;
  cin >> n >> m >> l;
  long long A[n][m];
  long long B[m][l];
  long long c[n][l];

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> A[i][j];
    }
  }

  for(int i = 0; i < m; i++){
    for(int j = 0; j < l; j++){
      cin >> B[i][j];
    }
  }

  for(int i =0; i < n; i++){
    for(int j = 0; j < l; j++){
      c[i][j] = 0;
      for(int k = 0; k<m; k++){
        c[i][j] += A[i][k]*B[k][j];
      }
    }
  }


  for(int i = 0; i < n; i++){
      for(int j = 0; j < l-1; j++){
        cout << c[i][j] << " ";
      }
    cout << c[i][l-1] << endl;
  }
}