#include <cstdio>
using namespace std;

typedef long long int LLI;

LLI a, b;

LLI extgcd(LLI a, LLI b, LLI &x, LLI &y) {
  LLI p;

  if (b == 0) {
    x = 1;
    y = 0;
    p = a;
  } else {
    p = extgcd(b, a%b, y, x);
    y -= (a/b)*x;
  }

  return p;
}

int main() {
  while (1) {
    if (scanf("%lld%lld", &a, &b) != 2) break;

    LLI x, y;
    LLI g = extgcd(a, b, x, y);
    printf("%lld %lld\n", g, a/g*b);
  }
}