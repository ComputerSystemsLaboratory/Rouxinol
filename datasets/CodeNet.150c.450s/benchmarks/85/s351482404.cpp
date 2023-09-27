#include <iostream>
#include <algorithm>
#include <cstdio>
#include <limits>

const int N = 102;

long m[N][N], p[N+1];

int matrixChainOrder(int n){

  for(int i=1; i<n; i++){ m[i][i] = 0; }

  for(int l=2; l<n; l++){
    for(int i=1; i < n - l + 1; i++){
      int j = i+l-1;
      m[i][j] = std::numeric_limits<long>::max();
      for(int k=i; k<=j-1; k++){
        m[i][j] = std::min(m[i][j], m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j]);
      }
    }
  }
  return m[1][n - 1];
}

int main(){
  int n ;
  std::cin >> n; //number of matrix

  for(int i=1; i<=n; i++){
    std::cin >> p[i-1] >> p[i];
  }
  // for (int i = 0; i <=n; ++i) std::cout << p[i] << std::endl;
  std::cout << matrixChainOrder(n + 1) << std::endl;

  return 0;
}

