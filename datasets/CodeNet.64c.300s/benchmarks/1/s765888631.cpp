#include <algorithm>
#include <iostream>
using namespace std;

int partition(int A[], int p, int r) {
  int x = A[r-1];
  int i = p - 1;
  for (int j = p; j < r-1; j++) {
    if (A[j] <= x)
      swap(A[++i], A[j]);
  }
  swap(A[i+1], A[r-1]);
  return i+1;
}

int main() {
  int n, A[100000];
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> A[i];
  int r = partition(A, 0, n);
  for (int i = 0; i < n; i++) {
    if (i) cout << ' ';
    if (i == r) cout << '[' << A[i] << ']';
    else cout << A[i];
  }
  cout << endl;
  return 0;
}