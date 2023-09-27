#include <iostream>
using namespace std;

int main() {
  int N, A[110];
  cin >> N;
  for (int i = 0; i < N; i++) cin >> A[i];

  for (int i = 0; i < N; i++) {
    if (i) cout << " ";
    cout << A[i];
  }
  cout << endl;

  for (int i = 1; i < N; i++) {
    int v = A[i], j = i - 1;
    while (j >= 0 && A[j] > v) {
      A[j + 1] = A[j];
      j--;
    }
    A[j + 1] = v;

    for (j = 0; j < N; j++) {
      if (j) cout << " ";
      cout << A[j];
    }
    cout << endl;
  }
  
  return 0;
}
