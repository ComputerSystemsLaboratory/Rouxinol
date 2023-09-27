#include <iostream>
using namespace std;

int day(int y, int m, int d) {
  int ans = 0;
  for (int i=1; i<y; i++) {
    if (i%3 == 0) {
      ans += 200;
    } else {
      ans += 195;
    }
  }
  bool dai = (y%3 == 0);
  for (int i=1; i<m; i++) {
    if (dai || i%2 != 0) {
      ans += 20;
    } else {
      ans += 19;
    }
  }
  ans += d;
  return ans;
}

int main() {
  int n;
  scanf("%d", &n);
  int C = day(1000,1,1);
  for (int i=0; i<n; i++) {
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    int D = day(y, m, d);
    printf("%d\n", C-D);
  }
}