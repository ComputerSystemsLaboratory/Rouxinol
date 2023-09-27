#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& A, int p, int r) {
  int x = A[r];
  int i = p - 1;
  for (int j = p; j < r; ++j) {
    if (A[j] <= x) {
      ++i;
      swap(A[i], A[j]);
    }
  }
  swap(A[i + 1], A[r]);
  return i + 1;
}

int main() {
  int n;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; ++i) cin >> A[i];
  int p = partition(A, 0, n - 1);
  for (int i = 0; i < n; ++i) {
    if (i == p) {
      cout << "[" << A[i] << "]" << " ";
      continue;
    } else if (i == n - 1) {
      cout << A[i] << endl;
    } else {
      cout << A[i] << " ";
    }
  }
}

