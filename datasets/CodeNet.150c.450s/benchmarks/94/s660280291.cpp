#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int A[110];
  for (auto i = 0; i < N; i++) {
    cin >> A[i];
  }
  bool f = true;
  int ans = 0;
  while (f) {
    f = false;
    for (auto j = N-1; j >= 1; j--) {
      if (A[j] < A[j-1]) {
        int temp = A[j-1];
        A[j-1] = A[j];
        A[j] = temp;
        f = true;
        ans++;
      }
    }
  }
  for (auto i = 0; i < N; i++) {
    cout << A[i];
    if (i != N-1) {
      cout << " ";
    } else {
      cout << endl;
    }
  }
  cout << ans << endl;
}