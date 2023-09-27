#ifdef LOCAL_BUILD
#include "pch.h"
#define DLOG(msg) cout << "#" << __LINE__ << ":" << msg << endl;
#define DLOG_V(var)\
  cout << "#" << __LINE__ << ":" << #var << " : " << var << endl;
#else
#include <bits/stdc++.h>
#define DLOG(msg)
#define DLOG_V(var)
#endif
using namespace std;

uint64_t solve(int n) {
  vector<uint64_t> cache(n + 1, 0);
  cache[0] = cache[1] = 1;
  for (int i = 2; i <= n; ++i) {
    cache[i] = cache[i - 1] + cache[i - 2];
  }
  return cache[n];
}

int main() {
  int n;
  cin >> n;
  uint64_t result = solve(n);
  cout << result << endl;
}