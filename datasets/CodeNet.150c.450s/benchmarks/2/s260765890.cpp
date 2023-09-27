#include <iostream>
using namespace std;
#define MAX 100000

void swap(int *x, int *y) {
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}

int pertition(int *A, int p, int r) {
  int x = A[r];
  int i = p-1;
  for (int j = p; j < r; j++) {
    if (A[j] <= x) {
      i++;
      swap(A[i], A[j]);
    }
  }
  swap(A[i+1], A[r]);
  return i+1;
}

int main() {
  int n;
  cin >> n;

  int A[MAX];
  for (int i = 0; i < n; i++) cin >> A[i];

  int x = pertition(A, 0, n-1);
  for (int i = 0; i < x; i++) 
    cout << A[i] << " " << flush;
  cout << "[" << A[x] << "]" << flush;
  for (int i = x+1; i < n; i++) 
    cout << " " << A[i] << flush;
  cout << endl;

  return 0;
}
