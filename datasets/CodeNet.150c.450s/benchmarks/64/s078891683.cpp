#include<iostream>
using namespace std;

int n, A[21], q, m[201];

bool solve(int i, int m) {
  if ( m == 0 ) return true;
  else if ( i >= n ) return false;
  bool res = solve(i + 1, m) || solve(i + 1, m - A[i]);
  return res;
}

int main() {

  cin >> n;
  for ( int i = 0; i < n; i++ ) cin >> A[i];

  cin >> q;
  for ( int i = 0; i < q; i++ ) cin >> m[i];
  for ( int i = 0; i < q; i++ ) {
    if ( solve(0, m[i]) ) cout << "yes\n";
    else cout << "no\n";
  }

  return 0;
}