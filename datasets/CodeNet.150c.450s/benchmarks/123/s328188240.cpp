#ifdef LOCAL_BUILD
#include "pch.h"
#define DLOG(msg) cout << "#" << __LINE__ << ":" << msg << endl;
#else
#include <bits/stdc++.h>
#define DLOG(msg)
#endif
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> nums;
  int max_ = 0;
  for (int t, i = 0; i < n; ++i) {
    cin >> t;
    nums.push_back(t);
    max_ = max(max_, t);
  }
  int limit = 1;
  for (; limit * limit < max_; ++limit) {
  }
  vector<bool> primes(max_ + 1, true);
  for (int i = 2; i <= limit; ++i) {
    if (primes[i]) {
      for (int j = i + i; j <= max_; j += i) {
        primes[j] = false;
      }
    }
  }
  int count = 0;
  for (auto&& num : nums) {
    if (primes[num]) {
      count++;
    }
  }
  cout << count << endl;
}