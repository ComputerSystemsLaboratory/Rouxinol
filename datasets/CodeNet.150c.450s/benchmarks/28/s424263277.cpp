// -*- mode:c++; coding:utf-8; indent-tabs-mode:nil; -*-
// ALDS1_4-D: Search - Allocation

#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
//#include <numeric>
using namespace std;

typedef unsigned int uint;

static pair<uint, uint> sum_max(const vector<uint>& ws) {
  auto ws_sum = 0u;
  auto max_w = 0u;
  for (auto w : ws) {
    ws_sum += w;
    max_w = max(max_w, w);
  }
  return make_pair(ws_sum, max_w);
}

static bool is_loaded(uint max_load, uint num, const vector<uint>& ws) {
  const auto last = ws.end();
  auto it = ws.begin();
  for (auto i = 0u; i < num; ++i) {
    auto capacity = max_load;
    while (it < last && *it <= capacity) {
      capacity -= *it++;
    }
    if (it == last) return true;
  }
  return false;
}

static uint min_load_capacity(uint num, const vector<uint>& ws) {
  const auto sum_max_ws = sum_max(ws);
  const auto ws_sum = sum_max_ws.first; // accumulate(ws.begin(), ws.end(), 0);
  const auto max_w = sum_max_ws.second; // *max_element(ws.begin(), ws.end());

  auto left = max(max_w, (ws_sum-1)/num+1);
  auto right = ws_sum;
  while (left < right) {
    const auto middle = (left+right)/2;
    if (is_loaded(middle, num, ws)) {
      right = middle;
    } else {
      left = middle+1;
    }
  }
  return right; // right == left;
}

int main(void) {
  uint n, k;
  cin >> n >> k;

  vector<uint> ws(n);
  for (auto i = 0u; i < n; ++i) {
    cin >> ws[i];
  }

  auto c = min_load_capacity(k, ws);
  cout << c << endl;

  return 0;
}
// end