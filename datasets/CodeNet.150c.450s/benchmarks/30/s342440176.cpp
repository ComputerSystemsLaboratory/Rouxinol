#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;
  int A[110];
  for (auto i = 0; i < N; i++) {
    cin >> A[i];
  }
  int ans = 0;
  for (auto i = 0; i < N; i++) {
    int minj = i;
    for (auto j = i; j < N; j++) {
      if (A[j] < A[minj]) {
        minj = j;
      }
    }
    if (i != minj) {
      swap(A[i], A[minj]);
      ans++;
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