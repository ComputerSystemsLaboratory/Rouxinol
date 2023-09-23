#include <iostream>
#define REP(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;

int E;

int main(void) {
  while(cin >> E, E) {
    int ans = 100000000;
    REP(z, 0, 101) {
      int z3 = z * z * z;
      if(z3 > E) break;
      REP(y, 0, 1001) {
        int y2 = y * y;
        int x = E - z3 - y2;
        if(x < 0) continue;
        ans = min(ans, x + y + z);
      }
    }
    cout << ans << endl;
  }
  return 0;
}