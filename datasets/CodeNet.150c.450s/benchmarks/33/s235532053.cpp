#include <bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<(int)b;i++)
#define rep(i,n) REP(i,0,n)

inline int komi(int p, int x) {
  return p*(100+x)/100;
}

int main() {
  
  int x, y, s;
  while(cin >> x >> y >> s) {
    if(x == 0 && y == 0 && s == 0) { break; }
    int mx = 0;
    REP(i, 1, s) REP(j, 1, s) {
      if(komi(i, x)+komi(j, x) == s) {
        mx = max(mx, komi(i, y)+komi(j, y));
      }
    }
    cout << mx << endl;
  }

  return 0;
}