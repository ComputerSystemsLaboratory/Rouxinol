#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int a, b, m, tmp_a, tmp_b;
  while (cin >> a >> b) {
    tmp_a = a;
    tmp_b = b;
    while (tmp_a != 0 && tmp_b != 0) {
      if (tmp_a > tmp_b) {
        tmp_a = tmp_a % tmp_b;
      } else {
        tmp_b = tmp_b % tmp_a;
      }
    }
    m = max(tmp_a, tmp_b);
    if (m == 0) {
      printf("%d %d\n", 0, 0);
    } else {
      printf("%d %d\n", m, a / m * b);
    }
  }
  return 0;
}