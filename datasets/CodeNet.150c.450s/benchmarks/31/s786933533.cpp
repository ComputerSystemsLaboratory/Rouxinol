#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int maxval = -1000000000;
  int minval = a[0];
  for (int i=1; i<n; i++) {
    maxval = max(maxval, a[i] - minval);
    minval = min(minval, a[i]);
  }

  cout << maxval << endl;

  return 0;
}

