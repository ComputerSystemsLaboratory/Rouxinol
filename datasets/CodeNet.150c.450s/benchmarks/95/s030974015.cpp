#include <bits/stdc++.h>
using namespace std;

int n;
char buf[10000];

int main() {
  while (1) {
    scanf("%d", &n);
    if (n == 0) return 0;

    int cnt = 0;
    string prev;
    for (int i=0; i<n; i++) {
      scanf(" %s", buf);
      string s(buf);
      if (s == "lu" && prev == "ru") cnt++;
      if (s == "ld" && prev == "rd") cnt++;
      if (s == "ru" && prev == "lu") cnt++;
      if (s == "rd" && prev == "ld") cnt++;
      prev = s;
    }
    printf("%d\n", cnt);
  }
}