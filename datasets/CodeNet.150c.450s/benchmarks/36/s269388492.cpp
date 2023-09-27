#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <functional>
#include <string>
#include <queue>
#include <vector>

using namespace std;

int main() {
  int d;
  while (scanf("%d", &d) == 1) {
    int a = 0;
    for (int x = 0; x < 600; x += d)
      a += d * x * x;
    printf("%d\n", a);
  }
  return 0;
}