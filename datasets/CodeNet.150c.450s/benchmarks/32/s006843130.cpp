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
  int m, mn, mx;
  while(cin>>m>>mn>>mx) {
    if(m == 0) return 0;
    int p[m];
    FOR(i,0,m) cin >> p[i];
    int mxsa = 0;
    int ans = 0;
    FOR(i,mn,mx+1) {
      if(p[i-1] - p[i] >= mxsa) {
        mxsa = p[i-1] - p[i];
        ans = i;
      }
    }
    cout << ans << endl;
  }
  return 0;
}