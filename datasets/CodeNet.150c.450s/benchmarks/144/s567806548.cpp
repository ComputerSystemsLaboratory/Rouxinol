#include <iostream>

using namespace std;

int main() {
  int n, m, l;
  long A[100][100] = {0};
  long B[100][100] = {0};
  long C[100][100] = {0};
  cin >> n >> m >> l;
  for(int y=0; y < n; ++y){
    for(int x=0; x < m; ++x){
      cin >> A[y][x];
    }
  }
  for(int y=0; y < m; ++y){
    for(int x=0; x < l; ++x){
      cin >> B[y][x];
    }
  }
  for(int y=0; y < n; ++y){
    for(int x=0; x < l; ++x){
      for(int i=0; i < m; ++i){
        C[y][x] += A[y][i] * B[i][x];
      }
    }
  }
  for(int y=0; y < n; ++y){
    for(int x=0; x < l; ++x){
      if(x) cout << ' ';
      cout << C[y][x];
    }
    cout << endl;
  }
  return 0;
}
