#include<iostream>
#include<algorithm>
using namespace std;

const int N = 100000;

int partition(int l, int r, int A[]) {
  int i, j, x;

  x = A[r];
  i = l - 1;

  for (j = l; j < r; j++) {
    if (A[j] <= x) {
      i++;
      swap(A[i], A[j]);
    }
  }

  swap(A[i+1], A[r]);

  return i + 1;
}                                

int main() {
  int i, n;
  int A[N];

  cin >> n;
  for (i = 0; i < n; i++) cin >> A[i];

  int q = partition(0, n-1, A);

  for (i = 0; i < n; i++) {
    if (i > 0) cout << " ";
    if (i == q) cout << "[" << A[i] << "]";
    else cout << A[i];
  }
  cout << endl;

  return 0;
}

