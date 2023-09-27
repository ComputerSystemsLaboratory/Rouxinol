#include <cstdio>
using namespace std;

int main() {
  int a[5], tmp;
  for (int i = 0; i < 5; ++i) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < 5; ++i) {
    for (int j = i + 1; j < 5; ++j) {
      if (a[i] < a[j]) {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
      }
    }
  }
  printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
}
