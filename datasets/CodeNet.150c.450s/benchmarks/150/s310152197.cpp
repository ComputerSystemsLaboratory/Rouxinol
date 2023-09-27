#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> A(n);
  vector<int> B(n);

  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  vector<int> C(100001);

  for (int i = 0; i < n; i++) {
    C[A[i]]++;
  }

  for (int i = 1; i < 100001; i++) {
    C[i] = C[i] + C[i - 1];
  }

  for (int i = n - 1; 0 <= i; i--) {
    B[C[A[i]] - 1] = A[i];
    C[A[i]]--;
  }

  for (int i = 0; i < n; i++) {
    cout << B[i];
    if (i != n - 1) {
      cout << " ";
    }
  }
  cout << endl;

  return 0;

}
