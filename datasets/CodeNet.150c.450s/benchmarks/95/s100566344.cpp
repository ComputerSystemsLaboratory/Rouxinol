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
  while(cin>>n) {
    if(n == 0) return 0;
    bool up = true;
    bool r = false, l = false;
    int ans = 0;
    FOR(i,0,n) {
      string s; cin >> s;
      if(s[1] == 'u') {
        (s[0] == 'r' ? r : l) = true;
      }
      else {
        (s[0] == 'r' ? r : l) = false;
      }
      if(up) {
        if(l && r) {
          ans++;
          up = false;
        }
      } else {
        if(!l && !r) {
          ans++;
          up = true;
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}