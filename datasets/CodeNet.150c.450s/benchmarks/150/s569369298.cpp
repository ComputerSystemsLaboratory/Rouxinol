#include <bits/stdc++.h>
using namespace std;
const int MAX = 10010;

void countingSort(vector<int> &A, vector<int> &B, int k) {
  vector<int> C(k+1);
  for (int i = 0; i < A.size(); i++) {
    C[A[i]]++;
  }
  for (int i = 1; i <= k; i++) {
    C[i] += C[i-1];
  }
  for (int i = A.size() - 1; i >= 0; i--) {
    B[C[A[i]] - 1] = A[i];
    C[A[i]]--;
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> A(n), B(n);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  countingSort(A, B, MAX);
  for (int i = 0; i < n; i++) {
    if (i) {
      cout << " ";
    }
    cout << B[i];
  }
  cout << endl;
}
