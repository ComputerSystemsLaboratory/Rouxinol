#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int a[4][3][10] = {0};

  {
    int b, f, r, v;
    for (int i = 0; i < n; ++i) {
      cin >> b >> f >> r >> v;
      a[b-1][f-1][r-1] += v;
    }
  }

  for (int b = 0; b < 4; ++b) {
    if (b > 0) {
      printf("####################\n");
    }
    for (int f = 0; f < 3; ++f) {
      for (int r = 0; r < 10; ++r) {
        printf(" %d", a[b][f][r]);
      }
      printf("\n");
    }
  }
  return 0;
}