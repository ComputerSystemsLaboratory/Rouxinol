#include <cstdio>
using namespace std;

int main() {
  int d, s;
  while (~scanf("%d", &d)) {
    s = 0;
    for (int i = d; i < 600; i += d) {
      s += i * i * d;
    }
    printf("%d\n", s);
  }
}
