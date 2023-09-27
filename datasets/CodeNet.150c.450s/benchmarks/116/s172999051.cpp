#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n, k;
  while (~scanf("%d %d", &n, &k)) {
    if ((n|k) == 0)
      break;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
      scanf("%d", &a[i]);

    for (int i = 1; i < n; ++i)
      a[i] += a[i-1];

    int ans = a[k-1];
    for (int i = k; i < n; ++i)
      ans = max(ans, a[i]-a[i-k]);

    printf("%d\n", ans);
  }
  return 0;
}