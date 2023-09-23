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
  int n;
  while(cin >> n) {
    if(n == 0) return 0;
    int ans = 0;
    FOR(i,1,n) {
      int sum = i;
      FOR(j,i+1,n) {
        sum += j;
        if(sum == n) ans++;
        if(sum > n) break;
      }
    }
    cout << ans << endl;
  }
  return 0;
}