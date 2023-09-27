#include <iostream>

using namespace std;

int n,k;
int* w;

bool clear(int P) {
  int cnt = 1;
  int W = 0;
  for (int i = 0; i < n; i++) {
    if (w[i] > P) {
      return false;
    }
    if (W + w[i] > P) {
      cnt++;

      if (cnt > k) {
        return false;
      }

      W = w[i];
    } else {
      W += w[i];
    }
  }
  return true;
}

int main() {
  cin >> n >> k;
  w = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> w[i];
  }

  int l = 0;
  int r = 1000000000;
  int m;
  while (l < r) {
    m = (l + r) / 2;
    if (clear(m)) {
      r = m;
    } else {
      l = m + 1;
    }
  }
  cout << l << endl;
}