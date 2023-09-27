#include <iostream>
using namespace std;

void CountingSort(int A[], int B[], int k, int n) {
  int C[10001] = {};
  
  for (int i = 1; i <= n; i++) C[A[i]]++;

  for (int i = 1; i <= k; i++) C[i] += C[i - 1];

  for (int i = n; i >= 1; i--) {
    B[C[A[i]]] = A[i];
    C[A[i]]--;
  }
}

int main() {
  int n; cin >> n;
  static int A[2000001]; for (int i = 1; i <= n; i++) cin >> A[i];

  static int B[2000001]; CountingSort(A, B, 10000, n);

  for (int i = 1; i <= n; i++) {
    if (i == n) cout << B[i] << endl;
    else cout << B[i] << " ";
  }

  return 0;
}
