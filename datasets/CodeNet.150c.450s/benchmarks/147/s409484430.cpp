#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll M = 1e9 + 7;

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    ll ans = 0;
    for (int x = 1; x <= (int)sqrt(i)+1; x++) {
      for (int y = x; y <= (int)sqrt(i)+1; y++) {
        for (int z = y; z <= (int)sqrt(i)+1; z++) {
          if (x*x+y*y+z*z+x*y+y*z+z*x == i) {
            if (x == y && y == z) {
              ans++;
            } else if (x != y && y != z && z != x){
              ans += 6;
            } else {
              ans += 3;
            }
          }
        }
      }
    }
    cout << ans << endl;
  } 
  return 0;
}