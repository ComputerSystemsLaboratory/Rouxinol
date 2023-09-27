#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main() {
  array<int,1501> x, y;
  array<int,1500001> t;
  int n, m;
  while (cin >> n >> m && n+m != 0) {
    y[0] = x[0] = 0;
    for (int i=1; i <= n; i++) {
      cin >> y[i];
      y[i] += y[i-1];
    }
    for (int i=1; i <= m; i++) {
      cin >> x[i];
      x[i] += x[i-1];
    }
    fill(t.begin(), t.begin()+max(n,m)*1000, 0);
    int cnt = 0;
    for (int i=0; i < n; i++) {
      for (int j=i+1; j <= n; j++)
        t[y[j]-y[i]]++;
    }
    for (int i=0; i < m; i++) {
      for (int j=i+1; j <= m; j++)
        cnt += t[x[j]-x[i]];
    }
    cout << cnt << endl;
  }
  return 0;
}