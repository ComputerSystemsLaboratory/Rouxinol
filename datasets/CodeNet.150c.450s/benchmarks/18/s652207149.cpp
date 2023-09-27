#include <cstdio>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)

int main() {
  int debt = 100000;
  int n;
  scanf("%d", &n);
  REP(i, n) {
    debt += debt * 0.05;
    if(debt%1000 != 0) {
      debt -= debt%1000;
      debt += 1000;
    }
  }
  printf("%d\n", debt);
  return 0;
}