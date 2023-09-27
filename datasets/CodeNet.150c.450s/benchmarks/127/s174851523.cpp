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
  if (!iM--) return false;
  s.clear();
  cin >> str;
  return true;
}

void manage() {
  int i;
  string a, b;
  for (i = 1; i < (int)str.length(); i++) {
    a = str.substr(0, i);
    b = str.substr(i);
    s.insert(a + b);
    s.insert(b + a);

    reverse(a.begin(), a.end());
    s.insert(a + b);
    s.insert(b + a);

    reverse(b.begin(), b.end());
    s.insert(a + b);
    s.insert(b + a);

    reverse(a.begin(), a.end());
    s.insert(a + b);
    s.insert(b + a);
  }
  printf("%d\n", s.size());
}

int main() {
  init();
  while (true) {
    if (!input()) break;
    manage();
  }
  return 0;
}