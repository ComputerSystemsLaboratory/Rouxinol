#include <cstdio>
#include <cstring>

int main() {
  int n;
  while (true) {
    scanf("%d", &n);
    if (n == 0) break;
    int cnt = 0;
    bool ru = false, lu = false;
    for (int i=0;i<n;i++) {
      char f[3]; scanf("%s", f);
      if (!strcmp(f,"lu")) lu = true;
      else if (!strcmp(f,"ru")) ru = true;
      else if (!strcmp(f,"ld")) lu = false;
      else ru = false;
      if (lu == ru && (lu & ru) == !(cnt & 1)) cnt++;
    }
    printf("%d\n", cnt);
  }
  return 0;
}