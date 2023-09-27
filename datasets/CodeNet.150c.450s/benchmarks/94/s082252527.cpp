#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int A[], int N, int& cnt) {
  int temp, flag = 1;
  while (flag) {
    flag = 0;
    for (int i = N-1; i > 0; i--) {
      if ( A[i] < A[i-1] ) {
        temp = A[i];
        A[i] = A[i-1];
        A[i-1] = temp;
        flag = 1;
        cnt++;
      }
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
  bubbleSort(A, N, cnt);

  for (int i = 0; i < N; i++) {
    if ( i != 0 ) cout << " ";
    cout << A[i];
  }
  cout << endl << cnt << endl;

  return 0;
}
