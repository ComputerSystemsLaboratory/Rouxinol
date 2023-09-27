#include <cstdio>
using namespace std;

int main() {
  while (1) {
    int a, b;
    if (scanf("%d%d", &a, &b) != 2) break;

    int sum = a+b;
    int cnt = 0;
    while (sum > 0) {
      cnt++;
      sum /= 10;
    }

    printf("%d\n", cnt);
  }
}