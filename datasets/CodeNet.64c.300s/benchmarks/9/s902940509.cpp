#include <iostream>
#include <cstdio>
using namespace std;

double cutup(double x) {
  if (x - (double)((int)x / 1000) * 1000 > 0) {
    x = (double)((((int)x / 1000) + 1) * 1000);
  }
  return x;
}

double money(double x, int target, int depth = 0) {
  if (target == depth) { return x; }
  return money(cutup(x * 1.05), target, depth + 1);
}

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  int n, x;
  cin >> n;

  printf("%.0f\n", money(100000., n));

  return 0;
}