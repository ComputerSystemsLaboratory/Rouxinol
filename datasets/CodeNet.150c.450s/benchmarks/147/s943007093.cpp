#include <bits/stdc++.h>

#define rep(x, n) for(int i = x; i < (n); ++i)

using namespace std;
using ll = long long;

int calc(int x, int y, int z) {
  return x * x + y * y + z * z + x * y + y * z + z * x; 
}


int main(void)
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    int res = 0;
    for (int x = 1; x*x <= n; ++x) {
      for (int y = 1; y*y <= n; ++y) {
        for (int z = 1; z*z <= n; ++z) {
          if (calc(x,y,z) < i)
            continue;
          if (calc(x,y,z) == i)
            ++res;

          break;
        }
      }
    }
    cout << res << endl;
  }
}