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
  int a, d, n;
  while(cin >> a >> d >> n, a || d || n) {
    int cnt = 0;
    FOR(i,0,10000000) {
      int x = a + d * i;
      if(x == 1) continue;
      bool prime = true;
      for(int j = 2; j * j <= x; j++) {
        if(x % j == 0) {
          prime = false;
          break;
        }
      }
      if(prime) cnt++;
      if(cnt == n) {
        cout << x << endl;
        break;
      }
    }
  }
  return 0;
}