///
// File:  2006.cpp
// Author: ymiyamoto
//
// Created on Fri Nov 10 06:23:37 2017
//

#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

static vector<string> arr({"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"});

int32_t main()
{
  uint32_t N;
  cin >> N;

  for (uint32_t i = 0; i < N; i++) {
    string str;
    cin >> str;
    uint32_t pre = 0;
    int32_t num = -1;
    for (uint32_t j = 0; j < str.size(); j++) {
      int32_t but = str[j] - '0';
      if (but == 0) {
        if (pre != 0) {
          cout << arr[pre][num];
        }
        pre = 0;
        num = -1;
      } else {
        pre = but;
        num++;
        num = num % arr[but].size();
      }
    }
    cout << endl;
  }

  return 0;
}