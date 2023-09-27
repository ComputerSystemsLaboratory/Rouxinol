#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  while(true) {
    int X, Y, S; cin >> X >> Y >> S;
    if(X == 0 && Y == 0 && S == 0) break;
    int ans = 0;
    for(int a = 1; a <= S - 1; ++a) {
      for(int b = 1; b <= S - 1; ++b) {
        int za = a * (100+X) / 100;
        int zb = b * (100+X) / 100;
        if(za + zb == S) {
          int na = a * (100+Y) / 100;
          int nb = b * (100+Y) / 100;
          ans = max(ans, na+nb);
        }
      }
    }
    cout << ans << endl;
  }
}