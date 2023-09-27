#include <iostream>
#include <algorithm>
using namespace std;

int ssort(int *A, int N) {
  auto cnt = 0;
  for (int i = 0; i < N; i++) {
    auto mini = i;
    for (int j = i + 1; j < N; j++) {
      if (A[mini] > A[j]) mini = j;
    }
    if (mini != i) {
      int temp;
      temp = A[i];
      A[i] = A[mini];
      A[mini] = temp;
      cnt++;
    }
  }
  return cnt;
}

int main(void) {
  int N, A[100];
  
  cin >> N;
  for (int i = 0; i < N; i++) cin >> A[i];
  
  auto cnt = ssort(A, N);
  
  for (int i = 0; i < N; i++) {
    if (i != 0) cout << " ";
    cout << A[i];
  }
  cout << endl;
  cout << cnt << endl;
  
  return 0;
}