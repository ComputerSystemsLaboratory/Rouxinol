#include <cstdio>
using namespace std;

int n;
int y, m, d;

int main() {
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d%d%d", &y, &m, &d);
    
    int cnt = 0;
    while (!(y == 1000 && m == 1 && d == 1)) {
      int days = 19;
      if (y%3 == 0 || m%2 == 1) days = 20;
      cnt += days-d+1;
      d = 1;
      m++;
      if (m == 11) {
        m = 1;
        y++;
      }
    }

    printf("%d\n", cnt);
  }
}