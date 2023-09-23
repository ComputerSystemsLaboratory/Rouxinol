#include<cstdio>
using namespace std;

int n, y, m, d;

int r = 39 * 5, t = 20 * 10;
int s = r * 2 + t;

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d%d%d", &y, &m, &d);
    y--; m--;
    int sum = (y / 3) * s + (y - (y / 3) * 3) * r;
    int temp = m * 20 + d;
    if ((y + 1) % 3 != 0) {
      temp -= m / 2;
      sum += temp;
    } else {
      sum += temp;
    }
    printf("%d\n", s * 333 + 1 - sum);
  }
}

