#include <iostream>

using namespace std;

int N;
int* A;

int main() {
  cin >> N;
  A = new int[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int cnt = 0;
  for (int i = 0; i < N; i++) {
    for (int j = N - 1; j > i; j--) {
      if (A[j] < A[j-1]) {
        int tmp = A[j];
        A[j] = A[j-1];
        A[j-1] = tmp;
        cnt++;
      }
    }
  }
  
  // out
  cout << A[0];
  for (int i = 1; i < N; i++) {
    cout << " " << A[i];
  }
  cout << endl;

  cout << cnt << endl;
  return 0;
}