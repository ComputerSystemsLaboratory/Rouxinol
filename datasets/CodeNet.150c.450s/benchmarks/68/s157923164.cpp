#include<cstdio>
#include<algorithm>
int n, a[1000];
using namespace std;

int main() {
  while (1) {
    scanf("%d", &n);
    if (n == 0) break;
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int diff = 100000000;
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++) diff = min(diff, a[i+1] - a[i]);
    printf("%d\n", diff);
  }
}

