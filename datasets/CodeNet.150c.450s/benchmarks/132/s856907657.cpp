#include <cstdio>

using namespace std;

int n, init_p;
int s[51];

int main() {
  while (true) {
    scanf("%d %d", &n, &init_p);
    if (n == 0 && init_p == 0) break;
    for (int i=0;i<n;i++) s[i] = 0;
    int p = init_p, curr = 0;
    while (true) {
      if (p == 0) {
        p += s[curr];
        s[curr] = 0;
      } else {
        s[curr]++;
        p--;
        if (s[curr] == init_p) break;
      }
      curr = (++curr)%n;
    }
    printf("%d\n", curr);
  }
  return 0;
}