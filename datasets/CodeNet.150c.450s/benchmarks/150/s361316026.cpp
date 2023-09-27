#include <bits/stdc++.h>
using namespace std;

void CountingSort(vector<int>& A, vector<int>& B, vector<int>& C) {
  int n = A.size();
  for (int i = 0; i < n; i++) {
    C[A[i]]++;
  }
  for (int i = 1; i < 10001; i++) {
    C[i] = C[i] + C[i - 1];
  }
  for (int i = n - 1; i >= 0; i--) {
    B[C[A[i]] - 1] = A[i];
    C[A[i]]--;
  }
};

int main() {
  vector<int> C(10001, 0);
  int n;
  cin >> n;
  vector<int> A(n);
  vector<int> B(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  CountingSort(A, B, C);
  for (int i = 0; i < n; i++) {
    if (i != n - 1) cout << B[i] << ' ';
    else cout << B[i] << endl;
  }
};

