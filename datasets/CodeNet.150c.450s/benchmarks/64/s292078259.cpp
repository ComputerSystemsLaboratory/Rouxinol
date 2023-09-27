#include <iostream>
using namespace std;

int n, A[2001];

bool solve(int i, int m) {
  if (m == 0 || A[i] == m) return true;
  if (i >= n || m < 0) return false;

  i++;
  return solve(i, m-A[i-1]) || solve(i, m);
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) cin >> A[i];

  int m, q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    cin >> m;
    if (solve(0, m)) cout << "yes" << endl;
    else cout << "no" << endl;
  }
  return 0;
}