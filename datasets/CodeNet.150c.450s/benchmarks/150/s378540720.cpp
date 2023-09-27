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

int main() {
  int n;
  cin >> n;
  vector<int> nums;
  vector<int> count(10000 + 1, 0);
  for (int t, i = 0; i < n; ++i) {
    cin >> t;
    nums.push_back(t);
    ++count[t];
  }
  for (auto it = next(count.begin()); it != count.end(); ++it) {
    *it = *it + *(prev(it));
  }
  vector<int> out(nums.size(), 0);
  for (auto it = nums.rbegin(); it != nums.rend(); ++it) {
    out[--count[*it]] = *it;
  }
  bool first = true;
  for (auto it = out.begin(); it != out.end(); ++it) {
    if (!first) {
      cout << " ";
    }
    first = false;
    cout << *it;
  }
  cout << endl;
}