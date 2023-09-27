///
// File:  1153.cpp
// Author: ymiyamoto
//
// Created on Thu Nov  9 18:23:50 2017
//

#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int32_t main()
{
  while (true) {
    uint32_t n, m;
    cin >> n >> m;
    if (n == 0) break;

    vector<uint32_t> a;
    vector<uint32_t> b;
    uint32_t a_total = 0;
    uint32_t b_total = 0;
    for (uint32_t i = 0; i < n; i++) {
      uint32_t val;
      cin >> val;
      a.push_back(val);
      a_total += val;
    }

    for (uint32_t i = 0; i < m; i++) {
      uint32_t val;
      cin >> val;
      b.push_back(val);
      b_total += val;
    }

    int32_t a_index = -1;
    int32_t b_index = -1;
    int32_t total = -1;
    for (uint32_t i = 0; i < a.size(); i++) {
      for (uint32_t j = 0; j < b.size(); j++) {
        a_total -= a[i];
        a_total += b[j];

        b_total += a[i];
        b_total -= b[j];
        if (a_total == b_total) {
          if (total == -1 || (total > a[i] + a[j])) {
            a_index = i;
            b_index = j;
            total = a[a_index] + b[b_index];
          }
        }
        a_total += a[i];
        a_total -= b[j];

        b_total -= a[i];
        b_total += b[j];
      }
    }

    if (total == -1) {
      cout << -1;
    } else {
      cout << a[a_index] << " " << b[b_index];
    }
    cout << endl;
  }

  return 0;
}