#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  int r, c;
  cin >> r >> c;

  int a[100] = {0}; // the sums of columns                                                                                                                                
  for (int i = 0; i < r; ++i) {
    int s = 0;
    int x;
    for (int j = 0; j < c; ++j) {
      cin >> x;
      s += x;
      a[j] += x;
      printf("%d ", x);
    }
    a[c] += s;
    printf("%d\n", s);
  }
  for (int j = 0; j <= c; ++j) {
    if (j > 0)
      printf(" ");
    printf("%d", a[j]);
  }
  printf("\n");
  return 0;
}