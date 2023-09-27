#include <iostream>
using namespace std;

const int MAX_NUM_PACKAGES = 100000;
const int MAX_NUM_TRUCKS = 100000;
const int MAX_WEIGHT = 10000;
int w[MAX_NUM_PACKAGES], n, k;

int check(long long p) {
  int j {0};
  for (int i = 0; i < k; i++) {
    long long s {0};
    while (s + w[j] <= p && j < n) {
      s += w[j];
      j++;
    }
  }
  return j;
}

long long solve() {
  long long left {0};
  long long right {MAX_NUM_PACKAGES * MAX_WEIGHT};
  long long mid {0};
  while (right - left > 1) {
    mid = (right + left) / 2;
    int v = check(mid);
    if (v >= n) {
      right = mid;
    } else {
      left = mid;
    }
  }
  return right;
}

int main() {
  cin >> n >> k;
  for (int i = 0; i < n; i++) cin >> w[i];
  long long ans = solve();
  cout << ans << endl;
  return 0;
}

