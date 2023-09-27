#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG

int n, k;
vector<int> w;

bool ok(int p) {
  int i = 0;
  for (int j = 0; j < k; ++j) {
    int now = p;
    while (now - w.at(i) >= 0) {
      now -= w.at(i);
      i++;
      if (i == n)
        return true;
    }
  }
  return false;
}

int main() {
  cin >> n >> k;
  w = vector<int>(n);
  for (int i = 0; i < n; i++)
    cin >> w[i];
  int l = 0, h = 1e9 + 10;
  while (l + 1 < h) {
    int med = (l + h) / 2;
    if (ok(med))
      h = med;
    else
      l = med;
  }
  cout << l + 1 << endl;
}

