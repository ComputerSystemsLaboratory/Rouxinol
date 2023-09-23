#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  // dorm[i][x]
  // i: the index of the dormitory building.
  // 0 <= x <= 9: the 10 rooms in the first floor
  // 10 <= x <= 19: the 10 rooms in the second floor
  // 20 <= x <= 29: the 10 rooms in the third floor
  int dorms[4][30] = {0};

  int n;
  cin >> n;
  int b, f, r, v;
  for (int i = 0; i < n; ++i) {
    cin >> b >> f >> r >> v;
    const int x = (f - 1) * 10 + r - 1;
    dorms[b-1][x] += v;
  }

  for (int i = 0; i < 4; ++i) {
    if (i > 0)
      printf("####################\n");
    for (int j = 0; j < 30; ++j) {
      if (j == 10 || j == 20)
        printf("\n");
      printf(" %d", dorms[i][j]);
    }
    printf("\n");
  }

  return 0;
}