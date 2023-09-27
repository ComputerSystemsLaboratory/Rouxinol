#ifdef LOCAL_BUILD
#include "pch.h"
#define DLOG(msg) cout << "#" << __LINE__ << ":" << msg << endl;
#else
#include <bits/stdc++.h>
#define DLOG(msg)
#endif
using namespace std;

int main() {
  string s;
  cin >> s;
  stack<size_t> descends;
  size_t total = 0;
  size_t d = 0;
  vector<pair<size_t, size_t>> areas;
  for (size_t i = 0; i < s.size(); ++i) {
    auto c = s[i];
    if (c == '\\') {
      descends.push(i);
    } else if (c == '/') {
      if (!descends.empty()) {
        d = descends.top();
        descends.pop();
        total += i - d;
        size_t cur = 0;
        for (auto it = areas.begin(); it != areas.end();) {
          if (it->first > d) {
            cur += it->second;
            it = areas.erase(it);
          } else {
            ++it;
          }
        }
        areas.push_back(make_pair(d, cur + i - d));
      }
    }
  }

  cout << total << endl;
  cout << areas.size();
  for (auto&& area : areas) {
    cout << " " << area.second;
  }
  cout << endl;
}