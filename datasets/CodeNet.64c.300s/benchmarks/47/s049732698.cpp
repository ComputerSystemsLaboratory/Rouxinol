#include <cstdio>
#include <algorithm>
using namespace std;

int n;
int maxcnt;
int cnt[101];

int main() {
  while (1) {
    if (scanf("%d", &n) != 1) break;
    cnt[n]++;
    maxcnt = max(maxcnt, cnt[n]);
  }

  for (int i=1; i<=100; i++) {
    if (maxcnt == cnt[i]) {
      printf("%d\n", i);
    }
  }
}