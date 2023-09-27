#include <iostream>
using namespace std;

const int MAX_WEIGHT = 10000;
const int MAX_NUM_PACKAGES = 100000;
int w[MAX_NUM_PACKAGES], n, k;

int check(long long p) {
  long long s {0}, i {0};
  for (int j = 0; j < k; j++) {
    s = 0;
    while (s + w[i] <= p && i < n) {
      s += w[i];
      i++;
    }
  }
  return i;
}

long long solve() {
  long long left {0};
  long long right {MAX_WEIGHT * MAX_NUM_PACKAGES};
  long long mid {0};
  while (right - left > 1) {
    mid = (left + right) / 2;
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
  cout << solve() << endl;
}

