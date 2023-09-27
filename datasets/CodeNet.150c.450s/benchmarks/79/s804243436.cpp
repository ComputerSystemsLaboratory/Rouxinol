#include<cstdio>
using namespace std;

int d[50];
int n, r;

int main() {
  while (1) {
    scanf("%d%d", &n, &r);
    if (n == 0) break;
    for (int i = 0; i < n; i++) d[i] = n - i;
    int p, c;
    int temp[50];
    for (int i = 0; i < r; i++) {
      scanf("%d%d", &p, &c);
      p--;
      for (int j = 0; j < c; j++) temp[j] = d[j + p];
      for (int j = 0; j < p; j++) temp[j + c] = d[j];
      for (int j = 0; j < p + c; j++) d[j] = temp[j];
    }
    printf("%d\n", d[0]);
  }
}

