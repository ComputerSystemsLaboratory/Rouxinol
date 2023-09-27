#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int main() {
  int a[4];
  while(cin >> a[0]) {
    REP(i,3)
      cin >> a[i+1];
    int hit = 0;
    int blow = 0;
    REP(i,4) {
      int b;
      cin >> b;
      if (b == a[i])
        hit++;
      else {
        REP(j,4)
          if (b==a[j])
            blow++;
      }
    }
    printf("%d %d\n", hit, blow);
  }
}