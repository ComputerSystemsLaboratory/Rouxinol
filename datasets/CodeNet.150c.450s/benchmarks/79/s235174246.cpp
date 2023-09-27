#include <cstdio>

using namespace std;

int n, r;
int cards[2][51];

int main() {
  while (true) {
    scanf("%d %d", &n, &r);
    if (n == 0 && r == 0) break;
    for (int i=0;i<n;i++) cards[0][i] = n-i;
    for (int i=0;i<r;i++) {
      int p, c;
      scanf("%d %d", &p, &c);
      for (int j=0;j<c;j++) {
        cards[(i+1)&1][j] = cards[i&1][p-1+j];
      }
      for (int j=0;j<p-1;j++) {
        cards[(i+1)&1][c+j] = cards[i&1][j];
      }
      for (int j=p-1+c;j<n;j++) {
        cards[(i+1)&1][j] = cards[i&1][j];
      }
    }
    printf("%d\n", cards[r&1][0]);
  }
}