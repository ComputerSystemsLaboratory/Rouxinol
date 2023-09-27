#include <iostream>
using namespace std;

int main() {
  int N;
  int A[110];
  cin >> N;
  for (int i = 0; i < N; i++) cin >> A[i];

  int cnt = 0;
  for (int i = 0; i < N - 1; i++) {
    int min_idx = i;
    for (int j = i + 1; j < N; j++) {
      if (A[j] < A[min_idx]) {
        min_idx = j;
      }
    }
    if (min_idx == i) continue;
    int v = A[i];
    A[i] = A[min_idx];
    A[min_idx] = v;
    cnt++;
  }
  
  for (int i = 0; i < N; i++) {
    if (i) cout << " ";
    cout << A[i];
  }
  cout << "\n" << cnt << endl;

  return 0;
}
