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
    if (s == "0") break;

    int n = s.size();
    int sum = 0;

    for (int i = 0; i < n; i++) sum += s[i] - '0';

    printf("%d\n", sum);
  }

  return 0;
}