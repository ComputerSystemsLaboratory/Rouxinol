///
// File:  2149.cpp
// Author: ymiyamoto
//
// Created on Fri Nov 10 14:52:30 2017
//
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int32_t main()
{
  while (true) {
    uint32_t N, A, B, C, X;
    cin >> N >> A >> B >> C >> X;

    if (N == 0) break;

    vector<uint32_t> arr;
    for (uint32_t i = 0; i < N; i++) {
      uint32_t val;
      cin >> val;
      arr.push_back(val);
    }

    uint32_t x = X;
    uint32_t found = 0;
    int32_t end_frame = -1;
    for (uint32_t i = 0; i <= 10000; i++) {
      if (x == arr[found]) {
        found++;
        if (found == arr.size()) {
          end_frame = i;
          goto end;
        }
      }
      x = (A * x + B) % C;
    }
  end:
    cout << end_frame << endl;
  }

  return 0;
}