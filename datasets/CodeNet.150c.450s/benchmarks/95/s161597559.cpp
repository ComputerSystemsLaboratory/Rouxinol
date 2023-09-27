///
// File:  2582.cpp
// Author: ymiyamoto
//
// Created on Fri Nov 10 21:04:04 2017
//

#include <cstdint>
#include <iostream>
#include <string>

using namespace std;

enum status_t {
  BothOnFloor,
  RightOnFloor,
  LeftOnFloor,
  BothOnStand,
};

int32_t main()
{
  while (true) {
    uint32_t n;
    cin >> n;
    if (n == 0) break;

    status_t old_status = BothOnFloor;
    status_t status = BothOnFloor;
    uint32_t count = 0;
    for (uint32_t i = 0; i < n; i++) {
      string str;
      cin >> str;
      if (str == "lu") {
        if (status == BothOnFloor) {
          status = RightOnFloor;
        } else if (status == LeftOnFloor) {
          status = BothOnStand;
        }
      } else if (str == "ru") {
        if (status == BothOnFloor) {
          status = LeftOnFloor;
        } else if (status == RightOnFloor) {
          status = BothOnStand;
        }
      } else if (str == "ld") {
        if (status == BothOnStand) {
          status = LeftOnFloor;
        } else if (status == RightOnFloor) {
          status = BothOnFloor;
        }
      } else {
        if (status == BothOnStand) {
          status = RightOnFloor;
        } else if (status == LeftOnFloor) {
          status = BothOnFloor;
        }
      }

      if (old_status != status && (status == BothOnStand || status == BothOnFloor)) {
        count++;
        old_status = status;
      }
    }
    cout << count << endl;
  }
  return 0;
}