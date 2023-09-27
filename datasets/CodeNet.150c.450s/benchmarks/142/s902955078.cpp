#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N, K;
  cin >> N >> K;
  vector<long long> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  for (int i = K; i < N; i++) {
    if (A[i - K] < A[i]) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}