#include <bits/stdc++.h>
using namespace std;

bool isAllocatable(int P, int k, const vector<int>& w) {
  int storage, n = w.size() - 1;
  for (size_t i = 0, j = 0; j < k; j++) {
    storage = 0;
    while (storage + w.at(i) <= P) {
      storage += w.at(i);
      if (i == n) return true;
      i++;
    }
  }

  return false;
}
int main() {
  int n, k, P = 0, sum = 0;
  cin >> n >> k;
  vector<int> w(n);
  for (size_t i = 0; i < n; i++) {
    cin >> w.at(i);
    sum += w.at(i);
  }

  int left = 0, right = sum, mid;

  while (right - left > 1) {
    mid = (left + right) / 2;
    if (isAllocatable(mid, k, w)) {
      right = mid;
    } else {
      left = mid;
    }
  }

  cout << right << endl;
}
