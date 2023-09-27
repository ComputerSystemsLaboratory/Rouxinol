#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int a[100003];

int mypartition(int p, int r) {
  int x = a[r];
  int i = p-1;
  for (int j=p; j<r; ++j) {
    if (a[j] <= x) {
      i++;
      int tmp = a[i];
      a[i] = a[j];
      a[j] = tmp;
    }
  }
  int tmp = a[i+1];
  a[i+1] = a[r];
  a[r] = tmp;
  return i+1;
}

int main() {
  int n, q;
  cin >> n;
  rep(i,n) cin >> a[i];

  q = mypartition(0, n-1);
  rep(i,n) {
    if (i == q) {
      cout << '[' << a[i] << ']';
    } else {
      cout << a[i];
    }
    cout << (i==n-1 ? '\n' : ' ');
  }
  return 0;
}

