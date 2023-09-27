#include<cstdio>
#include<algorithm>
#include<functional>
#include<map>
using namespace std;

int a, l;
char s[10];

int getN(char* a) {
  int ans = 0;
  for (int i = 0; i < l; i++) {
    ans *= 10;
    ans += (int)a[i] - '0';
  }
  return ans;
}

void getC(int a, char* c) {
  c[l] = 0;
  for (int i = l - 1, temp = 1; i >= 0; i--, temp *= 10) c[i] = (char)((int)(a % (temp * 10)) / temp) + '0';
}

void copy(char* t) {
  char x[10];
  for (int i = 0; i < l + 1; i++) x[i] = t[i];
}

int main() {
  while (1) {
    scanf("%d%d", &a, &l);
    if (l == 0) break;
    getC(a, s);
    int counter = 1, a = getN(s);
    char x[10];
    for (int i = 0; i < l + 1; i++) x[i] = s[i];
    sort(x, x + l, greater<int>());
    char y[10];
    for (int i = 0; i < l + 1; i++) y[i] = s[i];
    sort(y, y + l);
    int b = getN(x) - getN(y);
    map<int, int> m;
    m[a] = -1;
    m[b] = 1;
    if (a == b) {
      printf("0 %d 1\n", a);
      continue;
    }
    while (b != a) {
      getC(b, x);
      getC(b, y);
      sort(x, x + l, greater<int>());
      sort(y, y + l);
      b = getN(x) - getN(y);
      counter++;
      if (m[b] != 0) {
        if (m[b] == -1) m[b] = 0;
        printf("%d %d %d\n", m[b], b, counter - m[b]);
        break;
      }
      m[b] = counter;
    }
  }
}

