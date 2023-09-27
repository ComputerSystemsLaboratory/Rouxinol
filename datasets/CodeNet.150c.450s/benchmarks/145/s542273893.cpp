#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int mx1 = 0, mx2 = 0;
  map<string, int> m;
  while (cin >> s) ++m[s];
  for (auto i : m) mx1 = max(mx1, i.second);
  for (auto i : m) mx2 = max(mx2, (int)i.first.size());
  for (auto i : m) {
    if (i.second == mx1) cout << i.first << " ";
  }
  for (auto i : m) {
    if ((int)i.first.size() == mx2) cout << i.first << endl;
  }
}