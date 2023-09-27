#include <bits/stdc++.h>
using namespace std;
int n;
long int ans;
int main() {
  for(;;) {
    scanf("%d", &n);
    if(n == 0) break;
    vector<int> v(n);
    for(int i = 0; i < n; ++i) scanf("%d", &v[i]);
    sort(begin(v), end(v));
    v[n - 1] = 0, v[0] = 0;
    for(int i = 0; i < n; ++i) ans+=v[i];
    ans /= n - 2;
    printf("%ld\n", ans);
    n = 0, ans = 0;
    v.clear();
  }
  return 0;
}