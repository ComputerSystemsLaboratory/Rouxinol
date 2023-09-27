#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    array<int, 3> a;
    for (int& i : a) cin >> i;
    sort(a.begin(), a.end());
    if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2]) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}