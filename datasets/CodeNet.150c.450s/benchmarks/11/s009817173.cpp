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

const int SN = 4;
const int RN = 13;

const char scs[] = {'S', 'H', 'C', 'D'};

/* typedef */

/* global variables */

bool cs[SN][RN];

/* subroutines */

/* main */

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    char sc;
    int s, r;
    cin >> sc >> r;

    switch (sc) {
    case 'S': s = 0; break;
    case 'H': s = 1; break;
    case 'C': s = 2; break;
    case 'D': s = 3; break;
    }

    cs[s][r - 1] = true;
  }

  for (int s = 0; s < SN; s++)
    for (int r = 0; r < RN; r++)
      if (! cs[s][r]) printf("%c %d\n", scs[s], r + 1);
  return 0;
}