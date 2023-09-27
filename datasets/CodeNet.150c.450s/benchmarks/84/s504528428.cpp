#include <bits/stdc++.h>
using namespace std;

typedef long long lli;

lli rec(int l, int r, vector<int> &A) {
  if(r-l <= 1) return 0;
  int m = (l+r)/2;
  lli res = rec(l, m, A) + rec(m, r, A);
  queue<int> a, b;
  for(int i = l; i < m; ++i) a.push(A[i]);
  for(int i = m; i < r; ++i) b.push(A[i]);
  int k = l;
  while(a.size() && b.size()) {
    if(a.front() <= b.front()) {
      A[k++] = a.front();
      a.pop();
    } else {
      A[k++] = b.front();
      b.pop();
      res += a.size();
    }
  }
  while(a.size()) {
    A[k++] = a.front();
    a.pop();
  }
  while(b.size()) {
    A[k++] = b.front();
    b.pop();
  }
  return res;
}

int main() {
  int n;
  vector<int> A;
  cin >> n;
  A.resize(n);
  for(int i = 0; i < n; ++i) cin >> A[i];
  cout << rec(0, n, A) << endl;
  return 0;
}