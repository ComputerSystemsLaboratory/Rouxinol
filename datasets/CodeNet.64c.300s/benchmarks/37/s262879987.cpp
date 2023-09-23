#include <bits/stdc++.h>

using namespace std;

static inline int in(){ int x; scanf("%d", &x); return x; }

int main()
{
  int n;
  while (n = in()){
    int count = 0;
    for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        if (2 * n + i * (i + 1) == j * (j + 1)){
          count++;
          break;
        }
      }
    }
    printf("%d\n", count);
  }

  return 0;
}