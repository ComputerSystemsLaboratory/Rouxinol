#include <bits/stdc++.h>

using namespace std;

int main() {
  array<int, 10> h;
  for (int& i : h) cin >> i;
  partial_sort(h.begin(), h.begin() + 3, h.end(), greater<int>());
  for (int i = 0; i < 3; ++i) cout << h[i] << endl;
}