#include <iostream>
#include <cassert>
#include <queue>

#define INF 922337203685477580
typedef long long ll;

using namespace std;

void countingSort(int* A, int* B, int k, int n) {
  int C[k + 10];
  for (int i = 0; i <= k + 5; i++) {
    C[i] = 0;
  }

  for (int j = 0; j < n; j++) {
    C[A[j]]++;
  }

  for (int i = 1; i <= k; i++) {
    C[i] = C[i] + C[i - 1];
  }

  for (int j = n - 1; j >= 0; j--) {
    B[C[A[j]] - 1] = A[j];
    C[A[j]]--;
  }
}

int main() {
  int n;
  cin >> n;

  int A[n];
  int B[n];
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  countingSort(A, B, 10100, n);

  for (int i = 0; i < n; i++) {
    if (i) cout << " ";
    cout << B[i];
  }
  cout << endl;

  return 0;
}