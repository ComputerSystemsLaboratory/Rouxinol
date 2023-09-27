/*
 * b.cc: 
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
  for (;;) {
    string s;
    cin >> s;
    if (s == "-") break;

    int m;
    cin >> m;
    
    int sum = 0;
    for (int i = 0; i < m; i++) {
      int hi;
      cin >> hi;
      sum += hi;
    }

    int sn = s.size();
    sum %= sn;

    for (int i = 0; i < sn; i++) putchar(s[(sum + i) % sn]);
    putchar('\n');
  }

  return 0;
}