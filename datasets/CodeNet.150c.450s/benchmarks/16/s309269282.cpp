///
// File:  alds1_3_d.cpp
// Author: ymiyamoto
//
// Created on Sat Oct  7 16:10:09 2017
//

#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct area_t {
  int32_t start_pos;
  int32_t area;
};

static vector<int32_t> poss;
static vector<area_t> areas;

int32_t main()
{
  string str;
  cin >> str;

  for (int32_t i = 0; i < str.size(); i++) {
    if (str[i] == '\\') {
      poss.push_back(i);
    } else if (str[i] == '/') {
      if (!poss.empty()) {
        int32_t pos = poss.back();
        poss.pop_back();
        int32_t under_area = 0;
        while (!areas.empty()) {
          area_t area = areas.back();
          if (pos < area.start_pos) {
            under_area += area.area;
            areas.pop_back();
          } else {
            break;
          }
        }
        areas.push_back({pos, under_area + i - pos});
      }
    }
  }

  int32_t total = 0;
  for (uint32_t i = 0; i < areas.size(); i++) {
    total += areas[i].area;
  }

  cout << total << endl;
  cout << areas.size();

  for (uint32_t i = 0; i < areas.size(); i++) {
    cout << " ";
    cout << areas[i].area;
  }
  cout << endl;

  return 0;
}