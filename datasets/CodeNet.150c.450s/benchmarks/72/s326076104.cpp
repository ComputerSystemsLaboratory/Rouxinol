/*
 * a.cc: 
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

/* subroutines */

/* main */

int main() {
  string s;
  getline(cin, s);

  int n = s.size();

  for (int i = 0; i < n; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') putchar(s[i] - 'A' + 'a');
    else if (s[i] >= 'a' && s[i] <= 'z') putchar(s[i] - 'a' + 'A');
    else putchar(s[i]);
  }
  putchar('\n');
  return 0;
}