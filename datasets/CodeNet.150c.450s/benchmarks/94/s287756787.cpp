#include <iostream>
#include <algorithm>

using namespace std;

int bubbleSort(int A[], int N) {
  int sw = 0;

  bool flag = true;
  while (flag) {
    flag = false;
    for (int j = N - 1; j >= 1; j--) {
      if (A[j] < A[j - 1]) {
        swap(A[j], A[j -1]);
        sw++;
        flag = true;
      }
    }
  }

  return sw;
}

int main() {
  int N;
  cin >> N;

  int A[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int sw = bubbleSort(A, N);

  for (int i = 0; i < N; i++) {
    if (i > 0) {
      cout << " ";
    }
    cout << A[i];
  }
  cout << endl << sw << endl;

  return 0;
}