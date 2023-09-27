#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
  int ct = 0;
  int a[3];

  scanf("%d", &ct);
  for(int i = 0; i < ct; i++) {
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    sort(a, a + 3);
    printf("%s\n", a[2] * a[2] == a[0] * a[0] + a[1] * a[1] ? "YES" : "NO");
  }
  return 0;
}