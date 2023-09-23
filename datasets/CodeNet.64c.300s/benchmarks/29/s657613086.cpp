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
#include <cstring>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;

int main()
{
  int e;
  while(cin >> e, e) {
    int m = 1e9;
    for(int y = 0; y * y <= e; y++) {
      for(int z = 0; z * z * z <= e; z++) {
        int x = e - y * y - z * z * z;
        if(x >= 0) m = min(m, x + y + z);
      }
    }
    cout << m << endl;
  }
  return 0;
}