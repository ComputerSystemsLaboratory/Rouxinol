#include <iostream>
using namespace std;

int bsort(int *A, int N) {
  auto flag = true;
  int temp;
  auto cnt = 0;
  while (flag) {
    flag = false;
    for (auto i = N - 1; i > 0; i--) {
      if (A[i] < A[i-1]) {
        temp = A[i];
        A[i] = A[i-1];
        A[i-1] = temp;
        flag = true;
        cnt++;
      }
    }
  }
  return cnt;
}

int main(void) {
  int N, A[100];
  
  cin >> N;
  for (int i = 0; i < N; i++) cin >> A[i];
  
  auto cnt = bsort(A, N);
  
  for (int i = 0; i < N; i++) {
    if (i != 0) cout << " ";
    cout << A[i];
  }
  cout << endl;
  cout << cnt << endl;
  
  return 0;
}