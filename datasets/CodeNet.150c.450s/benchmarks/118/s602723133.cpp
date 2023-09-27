#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
typedef long long ll;

int solve(int y, int m, int d) {
  int ret = 0;
  if(y > 1) {
    ret += (y - 1) / 3 * 200;
    ret += (y - 1 - (y - 1) / 3) * 195;
  }
  if(y % 3 == 0 && m > 1) {
    ret += (m - 1) * 20;
  }
  if(y % 3 != 0 && m > 1) {
    ret += (m - 1) / 2 * 19;
    ret += (m - 1 - (m - 1) / 2) * 20;
  }
  ret += d;
  return ret;
}

int main()
{
  int n;
  cin >> n;
  while(n--) {
    int y, m, d;
    cin >> y >> m >> d;
    cout << solve(1000, 1, 1) - solve(y, m, d) << endl;
  }
  return 0;
}