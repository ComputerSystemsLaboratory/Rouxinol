#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
  int a, b;
  while(scanf("%d %d", &a, &b) != EOF) {
    a += b;
    b = 0;
    while(a != 0) {
      a /= 10;
      b++;
    }
    printf("%d\n", b);
  }
  return 0;
}