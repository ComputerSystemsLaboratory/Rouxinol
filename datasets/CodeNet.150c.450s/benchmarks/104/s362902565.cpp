#include <bits/stdc++.h>

using namespace std;

int main() {
  int w, n;
  cin >> w >> n;
  vector<int> k(w);
  for (int i = 0; i < w; ++i) k[i] = i;
  for (int i = 0; i < n; ++i) {
    int a, b;
    cin >> a;
    cin.ignore();
    cin >> b;
    swap(k[a - 1], k[b - 1]);
  }
  for (int i : k) cout << i + 1 << endl;
}