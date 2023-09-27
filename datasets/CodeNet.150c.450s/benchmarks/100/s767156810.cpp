#include <cstdio>
using namespace std;

typedef long long int LLI;

LLI n;
LLI ans = 1;

int main() {
  scanf("%lld", &n);
  while (n > 0) {
    ans *= n;
    --n;
  }

  printf("%lld\n", ans);
}