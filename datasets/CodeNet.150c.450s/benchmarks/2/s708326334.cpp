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

template <typename Iter>
Iter partition(Iter begin, Iter end, Iter pivot) {
  if (distance(pivot, end) != 1) {
    iter_swap(end -1, pivot);
    pivot = end - 1;
  }
  auto x = end;
  for (auto it = begin; it != end; ++it) {
    if (it != pivot && *it <= *pivot) {
      x = (x == end) ? begin : x + 1;
      if (x != it) {
        iter_swap(x, it);
      }
    }
  }
  x = (x == end) ? begin : x + 1;
  iter_swap(x, pivot);
  return x;
}

int main() {
  int n;
  cin >> n;
  vector<int> nums;
  for (int t, i = 0; i < n; ++i) {
    cin >> t;
    nums.push_back(t);
  }
  auto pivot = partition(nums.begin(), nums.end(), nums.end() - 1);
  bool first = true;
  for (auto it = nums.begin(); it != nums.end(); ++it) {
    if (!first)
      cout << " ";
    first = false;
    bool is_pivot = it == pivot;
    if (is_pivot)
      cout << "[";
    cout << *it;
    if (is_pivot)
      cout << "]";
  }
  cout << endl;
}