/*
 * d.cc: 
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
  cin >> s;

  int sn = s.size();

  int q;
  cin >> q;

  while (q--) {
    string op, p;
    int a, b;
    cin >> op >> a >> b;

    if (op == "print") {
      for (int i = a; i <= b; i++) putchar(s[i]);
      putchar('\n');
    }
    else if (op == "reverse") {
      for (int i = a, j = b; i < j; i++, j--) swap(s[i], s[j]);
    }
    else if (op == "replace") {
      cin >> p;
      for (int i = 0; i <= b - a; i++) s[a + i] = p[i];
    }
  }
  return 0;
}