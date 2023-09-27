#include <bits/stdc++.h>

using namespace std;

int main() {
  int i, j;
  while (1) {
    int n, r;
    scanf("%d %d", &n, &r);
    if (n == 0) break;
    vector<int> a(n); // int a[n]
    for (i = 0; i < n; i++) {
      a[i] = n-i;
    }
    for (i = 0; i < r; i++) {
      int p, c;
      scanf("%d %d", &p, &c);
      auto x = vector<int>(a.begin(), a.begin() + p - 1);
      auto y = vector<int>(a.begin() + p - 1, a.begin() + p - 1 + c);
      auto z = vector<int>(a.begin() + p - 1 + c, a.end());
      a = y;
      copy(x.begin(), x.end(), back_inserter(a));
      copy(z.begin(), z.end(), back_inserter(a));
    }
    cout << a.front() << endl;
  }
}

