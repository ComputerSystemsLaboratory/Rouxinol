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

int main()
{
  int a = 0, b = 0;
  FOR(i,0,4) {
    int in;
    cin >> in;
    a += in;
  }
  FOR(i,0,4) {
    int in;
    cin >> in;
    b += in;
  }
  cout << (a > b ? a : b) << endl;
  return 0;
}