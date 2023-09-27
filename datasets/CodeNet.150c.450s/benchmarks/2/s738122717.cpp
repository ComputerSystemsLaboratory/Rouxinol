#include <iostream>
#include <algorithm>
using namespace std;

int Partition(int A[], int p, int r) {
  int x = A[r];
  int i = p - 1;

  for (int j = p; j < r; j++) {
    if (A[j] <= x) {
      i++;
      int swap = A[i]; A[i] = A[j]; A[j] = swap;
    }
  }
  int swap = A[i + 1]; A[i + 1] = A[r]; A[r] = swap;

  return i + 1;
}

int main() {
  int n; cin >> n;
  int A[100000]; for (int i = 0; i < n; i++) cin >> A[i];

  int q = Partition(A, 0, n - 1);

  for (int i = 0; i < n; i++) {
    if (i == q)cout << "[" << A[i] << "]";
    else cout << A[i];

    if (i == n - 1)cout << endl;
    else cout << " ";
  }
}
