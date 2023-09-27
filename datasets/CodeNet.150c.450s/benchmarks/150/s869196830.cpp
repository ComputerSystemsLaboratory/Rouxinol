#include<iostream>
using namespace std;

const int K = 10000;

void counting_sort(int n, int A[], int B[]) {
  int i, accum;
  int C[K+1] = {};

  for (i = 1; i < n+1; i++) C[A[i]]++;
  accum = 0;
  for (i = 0; i < K+1; i++) {
    accum += C[i];
    C[i] = accum;
  }

  for (i = n; i > 0; i--) {
    B[C[A[i]]] = A[i];
    C[A[i]]--;
  }
}  

int main() {
  int i, n;
  int *A, *B;
  // int A[N+1], B[N+1];
  
  cin >> n;
  A = new int[n+1];
  B = new int[n+1];

  for (i = 1; i < n+1; i++) cin >> A[i];

  counting_sort(n, A, B);

  for (i = 1; i <= n ; i++) {
    if (i > 1) cout << " ";
    cout << B[i];
  }
  cout << endl;

  delete[] A;
  delete[] B;

  return 0;
}
