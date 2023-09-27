#include <bits/stdc++.h>
using namespace std;

int n;
int m;
char buf[100000];
set<string> ids;

int main() {
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf(" %s", buf);
    ids.insert(buf);
  }

  scanf("%d", &m);

  bool opened = false;
  for (int i=0; i<m; i++) {
    scanf(" %s", buf);
    if (ids.count(buf)) {
      opened ^= 1;
      if (opened) printf("Opened by %s\n", buf);
      else printf("Closed by %s\n", buf);
    } else printf("Unknown %s\n", buf);
  }
}