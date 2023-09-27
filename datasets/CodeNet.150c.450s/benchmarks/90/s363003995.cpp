#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, mx = 0;
  map<int, int> m;
  while (cin >> n) ++m[n];
  for (auto i : m) mx = max(mx, i.second);
  for (auto i : m) {
    if (i.second == mx) cout << i.first << endl;
  }
}