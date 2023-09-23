#include <bits/stdc++.h>
using namespace std;

void selectionSort(int A[], int N, int& cnt) {
  int minj;

  for (int i = 0; i < N; i++) {
    minj = i;
    for (int j = i; j < N; j++) {
      if (A[j] < A[minj]) minj = j;
    }

    if (minj != i) {
      swap(A[i], A[minj]);
      cnt++;
    }

  }
}

int main() {
  int N, j, cnt;
  int A[100];
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  
  cnt = 0;
  selectionSort(A, N, cnt);

  for (int i = 0; i < N; i++) {
    if ( i != 0 ) cout << " ";
    cout << A[i];
  }
  cout << endl << cnt << endl;

  return 0;
}
