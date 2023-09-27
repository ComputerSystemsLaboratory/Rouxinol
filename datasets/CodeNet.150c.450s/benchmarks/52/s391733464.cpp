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
  int i = 0, x, s[10];
  while (scanf("%d", &x) == 1)
    if (!x)
      printf("%d\n", s[--i]);
    else
      s[i++] = x;
  return 0;
}