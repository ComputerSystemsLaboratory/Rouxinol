#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i=0; i<N; i++) cin >> A[i];

  for (int i=1; i<N; i++) {
    for (int t=0; t<N-1; t++) cout << A[t] << " ";
    cout << A[N-1] << endl;
    int v = A[i];
    int j = i - 1;
    while (j >= 0 && A[j] > v) {
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = v;
  }

  for (int t=0; t<N-1; t++) cout << A[t] << " ";
  cout << A[N-1] << endl;

  return 0;
}

