#include <cstdio>
#include <algorithm>

int main()
{
  int e;
  while (~scanf("%d", &e)) {
    if (e == 0)
      break;

    int ans = 1 << 30;
    for (int y = 0; y*y <= e; ++y) {
      for (int z = 0; z*z*z <= e; ++z) {
	if (y*y+z*z*z <= e)
	  ans = std::min(ans, y+z+(e-y*y-z*z*z));
      }
    }

    printf("%d\n", ans);
  }
  return 0;
}