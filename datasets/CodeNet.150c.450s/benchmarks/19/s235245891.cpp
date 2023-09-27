#include<cstdio>
#include <algorithm>

using namespace std;

int main() {
  int a,b;
  while(scanf("%d %d", &a, &b)) {
    if (a == 0 && b == 0) break;
    if (a > b) swap(a, b);
    printf("%d %d\n", a, b);
  }
}