#include <iostream>
using namespace std;

int main(){
  int mxA[101][101], mxB[101][101], n, m, l, el;
  long long res;

  cin >> n >> m >> l;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      cin >> mxA[i][j];
    }
  }

  for(int i = 1; i <= m; i++){
    for(int j = 1; j <= l; j++){
      cin >> mxB[i][j];
    }
  }

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= l; j++){
      res = 0;
      for(int k = 1; k <= m; k++){
        res += mxA[i][k] * mxB[k][j];
      }
      if( j == l) cout << res << endl;
      else cout << res << ' ';
    }
  }

  return 0;
}