#include <bits/stdc++.h>
using namespace std;

typedef int Data[6];

int L;
int as[114514];
map<int, int> table;

void Convert(int t, int *d) {
  for (int i=0; i<L; i++) {
    d[i] = t%10;
    t /= 10;
  }
}

int Restore(int *d) {
  int ret = 0;
  for (int i=L-1; i>=0; i--) {
    ret = ret*10 + d[i];
  }
  return ret;
}

int main() {
  while (1) {
    scanf("%d%d", &as[0], &L);
    if (as[0] == 0 && L == 0) return 0;

    table.clear();
    table[as[0]] = 0;

    int idx = 1;
    while (1) {
      Data d;
      Convert(as[idx-1], d);
      sort(d, d+L);
      int maxi = Restore(d);
      reverse(d, d+L);
      int mini = Restore(d);
      as[idx] = maxi - mini;
      if (table.count(as[idx])) {
        printf("%d %d %d\n", table[as[idx]], as[idx], idx - table[as[idx]]);
        break;
      }
      table[as[idx]] = idx;
      idx++;
    }
  }
}