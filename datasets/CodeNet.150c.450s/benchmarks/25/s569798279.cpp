/*
 * c.cc: 
 */

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<functional>

using namespace std;

/* constant */

/* typedef */

/* global variables */

int cs[26];

/* subroutines */

/* main */

int main() {
  for (;;) {
    string s;
    getline(cin, s);
    if (cin.eof()) break;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] >= 'A' && s[i] <= 'Z') cs[s[i] - 'A']++;
      else if (s[i] >= 'a' && s[i] <= 'z') cs[s[i] - 'a']++;
    }
  }

  for (int i = 0; i < 26; i++)
    printf("%c : %d\n", 'a' + i, cs[i]);

  return 0;
}