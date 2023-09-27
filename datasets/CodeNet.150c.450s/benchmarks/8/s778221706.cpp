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

/* subroutines */

/* main */

int main() {
  int n;
  cin >> n;

  int an = 0, bn = 0;

  for (int i = 0; i < n; i++) {
    string sa, sb;
    cin >> sa >> sb;

    if (sa > sb) an += 3;
    else if (sa < sb) bn += 3;
    else an++, bn++;
  }

  printf("%d %d\n", an, bn);
  return 0;
}