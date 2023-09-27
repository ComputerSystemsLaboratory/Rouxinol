#include<cstdio>
using namespace std;

int n, m, s1[100], s2[100], sum1, sum2;

int main() {
  while (1) {
    scanf("%d%d", &n, &m);
    if (n == 0) break;
    sum1 = sum2 = 0;
    for (int i = 0; i < n; i++) scanf("%d", &s1[i]), sum1 += s1[i];
    for (int i = 0; i < m; i++) scanf("%d", &s2[i]), sum2 += s2[i];
    bool flag = false;
    int x, y;
    x = y = 10000;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (sum1 - s1[i] + s2[j] == sum2 - s2[j] + s1[i]) {
          flag = true;
          if (x + y > s1[i] + s2[j]) x = s1[i], y = s2[j];
        }
      }
    }
    if (flag) printf("%d %d\n", x, y);
    else printf("-1\n");
  }
}

