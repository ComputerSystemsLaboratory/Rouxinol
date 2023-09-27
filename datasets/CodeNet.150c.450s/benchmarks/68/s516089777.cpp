#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n;
  while (cin >> n, n) {
    int A[n];
    for (int i = 0; i < n; ++i) cin >> A[i];
    sort(A, A+n);
    int d = abs(A[0] - A[1]);
    for (int i = 1; i < n; ++i) d = min(d, abs(A[i]-A[i-1]));
    cout << d << endl;
  }
  return 0;
}