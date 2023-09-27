#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int n, m, l;
  unsigned long A[101][101];
  unsigned long B [101][101];
  cin >> n >> m >> l;
  for (int i =0 ; i < n ; i ++ ) {
  for (int j =0 ; j < m ; j ++ ) {
    cin >> A[i][j];
  }
  }

  for(int i = 0 ; i < m; i ++) {
    for(int j = 0; j < l ; j ++){
    cin >> B[i][j];
    }
  }

  for(int i = 0; i < n ; i ++) {
  for(int j = 0; j < l ; j ++ ) {
    unsigned long res = 0;
    for(int k = 0; k < m; k ++) {
      res += A[i][k] * B[k][j];
    }
    cout << res;
    if ( j != l-1 ) {
      cout << " " ;
  }
  }
  cout <<  endl;
  }


}