#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <functional>
#include <queue>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
  int a[4], b[4];
  while (scanf("%d", &a[0]) == 1) {
    for (int i = 1; i < 4; i++)
      scanf("%d", &a[i]);
    for (int i = 0; i < 4; i++)
      scanf("%d", &b[i]);
    int hit = 0, blow = 0;
    for (int i = 0; i < 4; i++)
      for (int j = 0; j < 4; j++)
        if (a[j] == b[i]) {
          if (i == j)
            hit++;
          else
            blow++;
        }
    printf("%d %d\n", hit, blow);
  }
  return 0;
}