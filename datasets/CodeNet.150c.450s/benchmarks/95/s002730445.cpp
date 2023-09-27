#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>

int testcase_ends() {
  size_t n;
  scanf("%zu", &n);

  if (n == 0)
    return 1;

  int m=0;
  bool up=false, left=false, right=false;
  for (size_t i=0; i<n; ++i) {
    char buf[4];
    scanf("%s", buf);
    std::string f=buf;

    if (f[0] == 'l') {
      left = !left;
    } else {
      right = !right;
    }

    if (!up && left && right) {
      up = true;
      ++m;
    } else if (up && !left && !right) {
      up = false;
      ++m;
    }
  }

  printf("%d\n", m);
  return 0;
}

int main() {
  while (!testcase_ends()) {}
}

