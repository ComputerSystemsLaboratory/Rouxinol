#include <bits/stdc++.h>
using namespace std;

int main () {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  for (int i = 0; i < n; i++) {
    vector<int> b(n), c(i+1);
    for (int j = 0; j <= i; j++) {
      c.at(j) = a.at(j);
    }
    sort(c.begin(), c.end());
    for (int j = 0; j <= i; j++) {
      b.at(j) = c.at(j);
    }
    if (i != n-1) {
      for (int j = i+1; j < n; j++) {
        b.at(j) = a.at(j);
      }
    }
    for (int j = 0; j < n; j++) {
      if (j == n-1) cout << b.at(j) << endl;
      else cout << b.at(j) << ' ';
    }
  }
}
