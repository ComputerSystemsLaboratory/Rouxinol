// -*- mode:c++; coding:utf-8; indent-tabs-mode:nil; -*-
// ALDS1_3-D: Areas on the Cross-Section Diagram

#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;

typedef unsigned int uint;

struct area {
  uint from_;
  uint area_;
  area(const uint from, const uint to) : from_(from), area_(to-from) {}
};
                     
static stack<area> prepare_areas(const string str) {
  stack<area> areas;
  stack<uint> s;
  for (auto i = 0u; i < str.size(); ++i) {
    auto c = str[i];
    if (c == '\\') {
      s.push(i);
    } else if (c == '/') {
      if (!s.empty()) {
        areas.push(area(s.top(), i));
        s.pop();
      }
    } else {
      // nop
    }
  }
  return move(areas);
}

static pair<uint, vector<uint>> accumulate_areas(stack<area> areas) {
  uint sum = 0u;
  vector<uint> accs;
  while (!areas.empty()) {
    auto p = areas.top();
    areas.pop();
    auto acc = p.area_;
    while (!areas.empty() && p.from_ < areas.top().from_) {
      acc += areas.top().area_;
      areas.pop();
    }
    sum += acc;
    accs.push_back(acc);
  }
  reverse(accs.begin(), accs.end());
  return move(make_pair(sum, accs));
}

int main(void) {
  string str;
  getline(cin, str);
  auto areas = prepare_areas(move(str));

  auto sum_accs = accumulate_areas(move(areas));
  auto sum = sum_accs.first;
  auto accs = sum_accs.second;

  cout << sum << endl;
  cout << accs.size();
  for (auto acc : accs) {
    cout << " " << acc;
  }
  cout << endl;

  return 0;
}
// end