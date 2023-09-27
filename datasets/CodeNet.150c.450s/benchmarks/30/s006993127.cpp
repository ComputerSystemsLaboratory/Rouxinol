#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  int* A = new int[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int cnt = 0;
  for (int i = 0; i < N; i++) {
    int mini = i;
    for (int j = i+1; j < N; j++) {
      if (A[j] < A[mini]) {
        mini = j;
      }
    }

    if (i != mini) {
      int tmp = A[i];
      A[i] = A[mini];
      A[mini] = tmp;
      cnt++;
    }
  }

  cout << A[0];
  for (int i = 1; i < N; i++) {
    cout << " " << A[i];
  }
  cout << endl;

  cout << cnt << endl;

  return 0;
}