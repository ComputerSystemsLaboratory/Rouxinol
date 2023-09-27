#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int n; scanf("%d", &n);
  int ans[10050] = {0};
  for(int x = 1; x <= 100; x++) {
    for(int y = 1; y <= 100; y++) {
      for(int z = 1; z <= 100; z++) {
        int v = x*x+y*y+z*z+x*y+y*z+z*x;
        if(v < 10050) ans[v]++;
      }
    }
  }
  for(int i = 1; i <= n; i++) {
    printf("%d\n", ans[i]);
  }
  return 0;
}
