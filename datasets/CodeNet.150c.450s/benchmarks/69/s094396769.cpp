#include <cstdio>

using namespace std;

int ball[10];

bool dfs(int left, int right, int n) {
  if (n == 10) return true;
  return ((left < ball[n]) && dfs(ball[n], right, n + 1)) ||
    ((right < ball[n]) && dfs(left, ball[n], n + 1));
}

int main() {
  int n;
  scanf("%d", &n);

  while (n--) {
    for (int i = 0; i < 10; ++i) {
      scanf("%d", &ball[i]);
    }

    if (dfs(0, 0, 0)) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  
  return 0;
}