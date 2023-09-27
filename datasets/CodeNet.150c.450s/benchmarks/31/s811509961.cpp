#include <bits/stdc++.h>
using namespace std;
static const int MAX = 220000;

int main() {
  const int INF = 1100000000;
  int n, r[MAX];
  cin >> n;
  for(int i = 0; i < n; i++) cin >> r[i];

  int maxv = -INF;
  int minv = r[0];

  for(int i = 1; i < n; i++) {
    maxv = max(maxv, r[i] - minv);
    minv = min(minv, r[i]);
  }

  cout << maxv << endl;
  return 0;
}

