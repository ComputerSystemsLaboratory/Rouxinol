#include <bits/stdc++.h>
using namespace std;
int MAX = 10000;
int main() {
  int n;
  cin >> n;
  vector<int> A(n), B(n, 0), C(MAX, 0);
  for (size_t i = 0; i < n; i++) {
    cin >> A[i];
    C[A[i]] += 1;
  }

  int sum = 0;
  for (int i = 0; i < MAX - 1; i++) {
    C[i + 1] += C[i];
  }
  reverse(A.begin(), A.end());
  for (auto &&e : A) {
    B[C[e] - 1] = e;
    C[e]--;
  }

  for (size_t i = 0; i < n; i++) {
    if (i == n - 1) {
      cout << B[i] << endl;
    } else {
      cout << B[i] << ' ';
    }
  }
}
