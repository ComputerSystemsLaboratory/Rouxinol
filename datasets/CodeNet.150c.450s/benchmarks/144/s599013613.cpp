#include<bits/stdc++.h>
using namespace std;

int main(){
  long long n, m, l, b[100][100], a[100][100], c[100][100] = {};
  cin >> n >> m >> l;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> a[i][j];
    }
  }
  for(int i = 0; i < m; i++){
    for(int j = 0; j < l; j++){
      cin >> b[i][j];
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      for(int k = 0; k < l; k++){
        c[i][k] += a[i][j] * b[j][k];
      }
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < l; j++){
      cout << (j == 0 ? "": " ") << c[i][j];
    }
    cout << endl;
  }
}