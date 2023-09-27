///
// File:  0011.cpp
// Author: ymiyamoto
//
// Created on Thu Nov  9 00:53:28 2017
//

#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int32_t main()
{
  uint32_t w, n;
  cin >> w;
  cin >> n;

  vector<uint32_t> lines;
  for (uint32_t i = 1; i <= w; i++) {
    lines.push_back(i);
  }

  for (uint32_t i = 0; i < n; i++) {
    uint32_t a, b;
    char sep;
    cin >> a >> sep >> b;
    swap(lines[a - 1], lines[b - 1]);
  }

  for (auto iter = lines.begin(); iter < lines.end(); iter++) {
    cout << *iter << endl;
  }

  return 0;
}