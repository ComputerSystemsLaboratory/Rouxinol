#include <stdio.h>

#include <algorithm>

using namespace std;

int getGcd(int a, int b) {
  if (a < b) {
    swap(a, b);
  }
  int rem = a % b;
  while (rem != 0) {
    a = b;
    b = rem;
    rem = a % b;
  }
  return b;
}

int main() {
  //freopen("GcdAndLcm.in", "r", stdin);
  int a, b;
  while (scanf("%d%d", &a, &b) == 2) {
    int gcd = getGcd(a, b);
    int lcm = (long long)a * b / gcd;
    printf("%d %d\n", gcd, lcm);
  }
  return 0;
}