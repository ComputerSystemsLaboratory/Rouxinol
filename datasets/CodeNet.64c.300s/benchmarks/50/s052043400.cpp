#include <iostream>
using namespace std;

int main() {
  int N;
  int A[110];
  cin >> N;
  for (int i = 0; i < N; i++) cin >> A[i];

  int cnt = 0;
  for (int i = 0; i < N - 1; i++) {
    for (int j = N - 1; j > i; j--) {
      if (A[j - 1] > A[j]) {
        int v = A[j - 1];
        A[j - 1] = A[j];
        A[j] = v;
        cnt++;
      }
    }
  }

  for (int i = 0; i < N; i++) {
    if (i) cout << " ";
    cout << A[i];
  }
  cout << "\n" << cnt << endl;
}
