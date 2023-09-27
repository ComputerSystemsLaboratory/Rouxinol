#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int &e : A) cin >> e;
  for (int i = 0; i < N-K; i++) {
    cout << (A[i] < A[i+K] ? "Yes" : "No") << endl;
  }
}