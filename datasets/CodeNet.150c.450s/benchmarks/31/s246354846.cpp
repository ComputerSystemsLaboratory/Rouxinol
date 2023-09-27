#include <bits/stdc++.h>
using namespace std;

int main () {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  int x = -2000000000, y = a.at(0);
  for (int i = 1; i < n; i++) {
    x = max(x, a.at(i)-y);
    y = min(y, a.at(i));
  }
  cout << x << endl;
}
