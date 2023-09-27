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
  while(1) {
    int m[6] = {500, 100, 50, 10, 5, 1};
    int n;
    cin >> n;
    if(n == 0) break;
    n = 1000 - n;
    int ans = 0;
    while(n > 0) {
      FOR(i,0,6) {
        if(n >= m[i]) {
          ans++;
          n -= m[i];
          break;
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}