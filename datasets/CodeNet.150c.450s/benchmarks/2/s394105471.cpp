#include <bits/stdc++.h>
using namespace std;

vector<int> A;

int partition (int p, int r) {
  int x = A[r];
  int i = p - 1;
  for (int j = p; j < r; j++) {
    if (A[j] <= x) {
      i++;
      swap(A[i], A[j]);
    }
  }
  swap(A[i+1], A[r]);
  return i + 1;
}

int main() {

  int n;
  cin >> n;

  A.resize(n);

  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  int k = partition(0, n - 1);

  for (int i = 0; i < n; i++) {
    if (i ==k) {
      cout << "[";
    }
    cout << A[i];
    if (i == k) {
      cout << "]";
    }
    if (i != n - 1) {
      cout << " ";
    }
  }
  cout<<endl;

  return 0;

}
