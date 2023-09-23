#include <iostream>
using namespace std;

void swap(int &x, int &y) {
  int tmp;
  tmp = x;
  x = y;
  y = tmp;
}

int selectionSort(int *a, int n) {
  int minj, res = 0;
  for (int i=0; i<n; i++) {
    minj = i;
    for (int j=i; j<n; j++) {
      if (a[j] < a[minj]) {
        minj = j;
      }
    }
    if (i != minj) {
      swap(a[i], a[minj]);
      res++;
    }
  }
  return res;
}

int main() {
  int N, A[100], cnt;
  cin >> N;
  for (int i=0; i<N; i++) {
    cin >> A[i];
  }
  cnt = selectionSort(A, N);

  for (int i=0; i<N; i++) {
    cout << A[i];
    if (i < N - 1) cout << " ";
  }
  cout << endl << cnt << endl;

  return 0;
}