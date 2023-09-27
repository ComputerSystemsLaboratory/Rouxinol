#include <stdio.h>

bool canOrder(int s[10], int index, int left_top, int right_top) {
  if (index == 10) {
    return true;
  }
  if (s[index] > left_top) {
    if (canOrder(s, index + 1, s[index], right_top)) {
      return true;
    }
  }
  if (s[index] > right_top) {
    if (canOrder(s, index + 1, left_top, s[index])) {
      return true;
    }
  }
  return false;
}

bool canOrder(int s[10]) {
  return canOrder(s, 0, 0, 0);
}

int main() {
  //freopen("Ball.in", "r", stdin);
  int test_count;
  scanf("%d", &test_count);
  for (int test = 0; test < test_count; ++test) {
    int s[10];
    for (int i = 0; i < 10; ++i) {
      scanf("%d", &s[i]);
    }
    bool result = canOrder(s);
    printf("%s\n", result ? "YES" : "NO");
  }
  return 0;
}