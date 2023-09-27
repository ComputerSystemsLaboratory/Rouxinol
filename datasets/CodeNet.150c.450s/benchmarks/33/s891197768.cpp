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
  int a, b, c;
  while(cin>>a>>b>>c) {
    if(a == 0) return 0;
    int ans = 0;
    FOR(x,1,c) {
      FOR(y,1,c) {
        int en = (100+a)*x/100+(100+a)*y/100;
        if(en == c) {
          ans = max(ans, (100+b)*x/100+(100+b)*y/100);
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}