#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  for (int i = K; i < N; i++) {
    if (A[i] > A[i - K])
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}