/*
 * AOJ1142_mizo0203.cpp
 *
 *  Created on: 2011/08/18
 *      Author: Satoki
 */
#include <iostream>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

int iM;
string str;
set<string> s;

void init() {
  scanf("%d", &iM);
}

bool input() {
  if (!iM--)
    return false;
  s.clear();
  cin >> str;
  return true;
}

void manage() {
  int i, j;
  string a, b;
  for (i = 1; i < (int) str.length(); i++) {

    for (j = 0; j < 8; j++) {

      string left = str.substr(0, i);
      string right = str.substr(i);

      if (j & 1) {
        reverse(right.begin(), right.end());
      }

      if (j & 2) {
        reverse(left.begin(), left.end());
      }

      if (j & 4) {
        swap(left, right);
      }

      s.insert(left + right);

    }
  }
  printf("%d\n", s.size());
}

int main() {
  init();
  while (true) {
    if (!input())
      break;
    manage();
  }
  return 0;
}