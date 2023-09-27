#include <iostream>
#include <string>
using namespace std;

int partition(int *A, int p, int r) {
  int x = A[r];
  int tmp;
  int i = p - 1;
  for (int j = p; j < r; j++) {
    if (A[j] <= x) {
      i++;
      tmp = A[i]; A[i] = A[j]; A[j] = tmp;
    }
  }
  i++;
  tmp = A[i]; A[i] = A[r]; A[r] = tmp;
  return i;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, q;
  cin >> n;

  int A[100000];
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  q = partition(A, 0, n - 1);


  for (int i = 0; i < n; i++) {
    if (i > 0) cout << " ";
    if (i == q) cout << "[";
    cout << A[i];
    if (i == q) cout << "]";
  }
  cout << endl;

  return 0;
}