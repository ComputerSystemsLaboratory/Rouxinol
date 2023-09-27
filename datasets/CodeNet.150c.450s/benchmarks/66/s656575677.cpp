#include <cstdio>
#include <string>
#include <set>

int testcase_ends() {
  size_t n;
  scanf("%zu", &n);

  std::set<std::string> U;
  for (size_t i = 0; i < n; ++i) {
    char buf[16];
    scanf("%s", buf);
    U.insert(buf);
  }

  size_t m;
  scanf("%zu", &m);
  bool opens = false;
  for (size_t i = 0; i < m; ++i) {
    char buf[16];
    scanf("%s", buf);
    if (U.count(buf)) {
      printf("%s by %s\n", (opens? "Closed": "Opened"), buf);
      opens = !opens;
    } else {
      printf("Unknown %s\n", buf);
    }
  }
  return 1;
}

int main() {
  while (!testcase_ends()) {}
}

