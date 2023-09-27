#include <cstdio>
#include <algorithm>
using namespace std;

int n;
int m;
int ans[1000];

int main() {
  scanf("%d", &n);
  for (int i=1; i<=n; i++) {
    ans[i] = i;
  }

  scanf("%d", &m);
  for (int i=0; i<m; i++) {
    int a, b;
    scanf("%d,%d", &a, &b);
    swap(ans[a], ans[b]);
  }

  for (int i=1; i<=n; i++) {
    printf("%d\n", ans[i]);
  }
}