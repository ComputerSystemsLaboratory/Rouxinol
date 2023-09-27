///
// File:  0013.cpp
// Author: ymiyamoto
//
// Created on Mon Nov 20 21:20:22 2017
//

#include <cstdint>
#include <iostream>
#include <stack>

using namespace std;

int32_t main()
{
  stack<uint32_t> s;
  while (true) {
    uint32_t n;
    cin >> n;
    if (cin.eof()) break;

    if (n == 0) {
      cout << s.top() << endl;
      s.pop();
    } else {
      s.push(n);
    }
  }
  return 0;
}