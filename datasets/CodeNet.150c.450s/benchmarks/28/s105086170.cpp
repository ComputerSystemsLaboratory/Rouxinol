// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_4-D: Allocation
 
#include <algorithm>
#include <cstdio>
#include <numeric>
#include <vector>
using namespace std;
 
using uint = unsigned int;
 
static bool is_loaded(uint max_load, uint num, const vector<uint>& ws)
{
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
 
static uint min_load_capacity(uint num, const vector<uint>& ws)
{
  const auto ws_sum = accumulate(ws.begin(), ws.end(), 0u);
  const auto max_w = *max_element(ws.begin(), ws.end());
 
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
 
int main()
{
  uint n, k;
  scanf("%u %u", &n, &k);
 
  vector<uint> ws(n);
  for (auto i = 0u; i < n; ++i) {
    scanf("%u", &ws[i]);
  }
 
  auto c = min_load_capacity(k, ws);
  printf("%u\n", c);
}
 
// eof