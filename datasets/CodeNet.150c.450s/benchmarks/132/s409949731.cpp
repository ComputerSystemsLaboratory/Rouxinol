#include<cstdio>
using namespace std;

int n, p;
int d[50], wan, now;

bool isEnd() {
  int counter = 0;
  for (int i = 0; i < n; i++) if(d[i] > 0) counter++;
  return counter == 1;
}

int main() {
  while (1) {
    scanf("%d%d", &n, &p);
    if (n == 0) break;
    for (int i = 0; i < n; i++) d[i] = 0;
    wan = p, now = n - 1;
    while (!isEnd()) {
      wan += d[now];
      d[now++] = 0;
      if (now == n) now = 0;
      for (int i = 0; i < n; i++) d[i] += wan / n;
      wan %= n;
      for (; wan > 0; wan--) {
        d[now++]++;
        if (now == n) now = 0;
      }
    }
    for (int i = 0; i < n; i++) if (d[i] > 0) {
      printf("%d\n", i);
      break;
    }
  }
}

