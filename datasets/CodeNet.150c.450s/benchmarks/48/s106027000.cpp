#include <cstdio>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
  while (true) {
    int e;
    scanf("%d", &e);
    if (e == 0) break;
    int m = (1 << 30);
    for (ll z=0;z*z*z<=e;z++) {
      const ll z3 = z*z*z;
      for (ll y=0;y*y+z3<=e;y++) {
        const ll x = e-(y*y+z3);
        m = min(m, (int)(x+y+z));
      }
    }
    printf("%d\n", m);
  }
  return 0;
}