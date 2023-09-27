#include <cstdio>
#include <algorithm>

using namespace std;

int a[1001];

int main() {
  int n;
  while (true) {
    scanf("%d", &n);
    if (n == 0) break;
    for (int i=0;i<n;i++) scanf("%d", &a[i]);
    sort(a, a+n);
    int mind = a[n-1];
    for (int i=0;i<n-1;i++) mind = min(mind, a[i+1]-a[i]);
    printf("%d\n", mind);
  }
  return 0;
}