#include<cstdio>
using namespace std;

int h, w;
int get(int x, int y) { return x * x + y * y; }

int main() {
  while (1) {
    scanf("%d%d", &h, &w);
    if (h == 0) break;
    int ans = 10000000, ansh = 100000, answ = 10000, first = get(h, w);
    for (int i = 1; i <= 150; i++) {
      for (int j = i + 1; j <= 150; j++) {
        int g = get(i, j);
        if (g > first && ans > g) ans = g, ansh = i, answ = j;
        if (g == first) if (h < i) {
          if (ans != first) ans = g, ansh = i, answ = j;
          else if (ansh > i) ans = g, ansh = i, answ = j;
        }
      }
    }
    printf("%d %d\n",ansh, answ);
  }
}

