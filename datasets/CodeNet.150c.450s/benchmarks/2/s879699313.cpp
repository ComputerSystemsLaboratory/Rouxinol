#include <bits/stdc++.h>

using namespace std;

#define ll long long
typedef complex<double> P;

int partition(int* A, int p, int r) {
  int x = A[r];
  int i = p-1;
  for (int j = p; j < r; j++) {
    if(A[j] <= x) {
      i++;
      swap(A[i], A[j]);
    }
  }
  swap(A[i+1], A[r]);
  return i+1;
}

int main() {
  int n;
  cin >> n;
  int a[100000];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int ix = partition(a, 0, n-1);
  for (int i = 0; i < n; i++) {
    if(i == ix) cout << '[' << a[i] << ']' << (i != n-1 ? ' ' : '\n');
    else cout << a[i] << (i != n-1 ? ' ' : '\n');
  }
}