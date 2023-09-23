#include <cstdio>
#include <iostream>
using namespace std;
#define N 100
#define M 100

int main() {
  int n, m;
  cin >> n >> m;
  int A[n][m];
  int B[m];
  int C[m];

  for (int i = 0; i < n; i++) {
   for (int j = 0; j < m; j++) {
      scanf("%d", &A[i][j]);
   } 
  }
  for (int i = 0; i < m; i++) {
    scanf("%d", &B[i]);
  }

  for (int i = 0; i < n; i++) {
    int tmp = 0;
    for (int j = 0; j < m; j++) {
       tmp += A[i][j] * B[j]; 
    }
    C[i] = tmp;
  }
  
  for (int i = 0; i < n; i++) {
    cout << C[i] << endl;
  }
}