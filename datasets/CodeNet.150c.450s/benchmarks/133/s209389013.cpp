#include<cstdio>
#include<set>

using namespace std;

int d, c[100], s[400][100];
int sat;
int m, t[400];
set<int> app[100];

int last(int d, int i) {
  return *(--app[i].upper_bound(d));
}

int next(int d, int i) {
  return *app[i].upper_bound(d);
}

int main() {
  scanf("%d", &d);
  for (int i = 1; i <= 26; i++) {
    scanf("%d", &c[i]);
    app[i].insert(0);
    app[i].insert(d+1);
  }
  for (int i = 1; i <= d; i++) {
    for (int j = 1; j <= 26; j++) {
      scanf("%d", &s[i][j]);
    }
  }
  for (int i = 1; i <= d; i++) {
    scanf("%d", &t[i]);
    sat += s[i][t[i]];
    app[t[i]].insert(i);
    for (int j = 1; j <= 26; j++) {
      sat -= c[j] * (i - last(i, j));
    }
    printf("%d\n", sat);
  }
}
