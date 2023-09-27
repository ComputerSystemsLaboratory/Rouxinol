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
  for (;;) {
    int a, b;
    char op;
    cin >> a >> op >> b;
    if (op == '?') break;

    int ans;
    switch (op) {
    case '+': ans = a + b; break;
    case '-': ans = a - b; break;
    case '*': ans = a * b; break;
    case '/': ans = a / b; break;
    }
    printf("%d\n", ans);
  }

  return 0;
}