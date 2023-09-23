#include <cstdio>
#include <algorithm>
using namespace std;

int n;
int es[3];

int main() {
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    for (int j=0; j<3; j++) {
      scanf("%d", &es[j]);
    }

    sort(es, es+3);
    if (es[0]*es[0] + es[1]*es[1] == es[2]*es[2]) {
      puts("YES");
    } else {
      puts("NO");
    }
  }
}