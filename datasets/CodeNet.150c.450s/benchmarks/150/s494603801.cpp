#include <bits/stdc++.h>

#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

#define MAX_N 2000000
#define MAX_A 10000

int A[MAX_N + 5], B[MAX_N + 5], C[MAX_A + 5];

void countingSort(int n, int k) {
  rep(i, k) C[i] = 0;
  rep(i, n) C[A[i]]++;
  rep(i, k - 1) C[i + 1] += C[i];
  for (int i = n - 1; i >= 0; i--) {
    B[C[A[i]] - 1] = A[i];
    C[A[i]]--;
  }
}

int main() {
  int n;
  cin >> n;
  rep(i, n) cin >> A[i];
  countingSort(n, MAX_A);
  rep(i, n) {
    if (i > 0) cout << " ";
    cout << B[i];
  }
  cout << endl;
  return 0;
}

