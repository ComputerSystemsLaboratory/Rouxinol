#include<iostream>
#include<vector>
int main(){
  int n,m,l;
  std::cin >> n >> m >> l;
  unsigned long long A[n][m], B[m][l], C[n][l];
  for(int i=0; i<n; i++) for(int j=0; j<m; j++) std::cin >> A[i][j];
  for(int i=0; i<m; i++) for(int j=0; j<l; j++) std::cin >> B[i][j];
  for(int i=0; i<n; i++){
    for(int j=0; j<l; j++){
      C[i][j] = 0;
      for(int k=0; k<m; k++) C[i][j] += A[i][k] * B[k][j];
    }
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<l; j++) std::cout << C[i][j] << (j < l-1 ? " " : "\n");
  }
  return 0;
}