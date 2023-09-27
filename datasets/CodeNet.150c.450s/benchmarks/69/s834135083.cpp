#include <cstdio>

using namespace std;

bool is_satisfiable(const int balls[], int left_top, int right_top) {
  if (*balls == 0) { return true; }
  return (*balls > left_top &&
          is_satisfiable(balls + 1, *balls, right_top)) ||
         (*balls > right_top &&
          is_satisfiable(balls + 1, left_top, *balls));
}

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    int balls[11];
    for (int j = 0; j < 10; ++j) { scanf("%d", balls + j); }
    balls[10] = 0;
    puts(is_satisfiable(balls, 0, 0) ? "YES" : "NO");
  }

  return 0;
}