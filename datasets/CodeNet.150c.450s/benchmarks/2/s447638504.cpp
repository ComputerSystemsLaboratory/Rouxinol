#include <bits/stdc++.h>

#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

#define MAX_N 100000
int A[MAX_N + 5];

int partition(int p, int r) {
  int x = A[r];
  int i = p - 1;
  int tmp;
  for (int j = p; j < r; j++) {
    if (A[j] <= x) {
      i++;
      tmp = A[j];
      A[j] = A[i];
      A[i] = tmp;
    }
  }
  tmp = A[r];
  A[r] = A[i + 1];
  A[i + 1] = tmp;
  return i + 1;
}

int main() {
  int n;
  cin >> n;
  rep(i, n) cin >> A[i];
  int idx = partition(0, n - 1);
  rep(i, n) {
    if (i > 0) cout << " ";
    if (i == idx) cout << "[";
    cout << A[i];
    if (i == idx) cout << "]";
  }
  cout << endl;
  return 0;
}

