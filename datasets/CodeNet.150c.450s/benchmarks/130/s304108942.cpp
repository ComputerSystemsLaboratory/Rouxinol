#include <iostream>

using namespace std;

int main() {
  int m,n;
  int A[100][100] = {0};
  int b[100] = {0};
  int c[100] = {0};
  cin >> n >> m;
  for(int y=0; y < n; ++y){
    for(int x=0; x < m; ++x){
      cin >> A[y][x];
    }
  }
  for(int y=0; y < m; ++y){
    cin >> b[y];
  }
  for(int y=0; y < n; ++y){
    for(int x=0; x < m; ++x){
      c[y] += (A[y][x] * b[x]); 
    }
  }
  for(int y=0; y < n; ++y){
    cout << c[y] << endl;
  }
  return 0;
}
