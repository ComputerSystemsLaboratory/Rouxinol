#ifdef LOCAL_BUILD
#include "pch.h"
#define DLOG(msg) cout << "#" << __LINE__ << ":" << msg << endl;
#define DLOG_V(var) \
  cout << "#" << __LINE__ << ":" << #var << " : " << var << endl;
#else
#include <bits/stdc++.h>
#define DLOG(msg)
#define DLOG_V(var)
#endif
using namespace std;

int main() {
  int n, q;
  cin >> n;
  unordered_set<int> nums;
  for (int i = 0; i < n; ++i) {
    int num;
    cin >> num;
    nums.insert(num);
  }
  cin >> q;
  int count = 0;
  for (int i = 0; i < q; ++i) {
    int num;
    cin >> num;
    if (nums.find(num) != nums.end()) {
      ++count;
    }
  }
  cout << count << endl;
}