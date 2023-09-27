#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;++i)
using namespace std;

const int MAX_N = 20, MAX_Q = 200;

int n, q, A[MAX_N], m[MAX_Q];

bool solve(int i, int m) {
  if (m == 0) return true;
  if (i >= n) return false;
  return (solve(i + 1, m) || solve(i + 1, m - A[i]));
}

int main() {
  cin >> n;
  REP(i, n) cin >> A[i];
  cin >> q;
  REP(i, q) cin >> m[i];

  REP(i, q) {
    if (solve(0, m[i])) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
  return 0;
}