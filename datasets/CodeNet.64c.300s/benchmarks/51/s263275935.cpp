#include <cstdio>
using namespace std;

int main() {
  int n;
  long long a = 1;
  scanf("%d", &n);
  for (int i = 2; i <= n; ++i) {
    a *= i;
  }
  printf("%lld\n", a);
}
