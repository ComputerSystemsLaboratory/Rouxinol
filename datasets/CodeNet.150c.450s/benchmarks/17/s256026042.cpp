#include <bits/stdc++.h>

using namespace std;

int main() {
  array<int, 5> a;
  for (int& i : a) cin >> i;
  sort(a.begin(), a.end(), greater<int>());
  for (int i = 0; i < int(a.size()); ++i) {
    cout << a[i];
    if (i != int(a.size()) - 1) cout << " ";
    else cout << endl;
  }
}