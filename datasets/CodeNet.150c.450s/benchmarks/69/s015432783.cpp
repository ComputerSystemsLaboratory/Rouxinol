#include <bits/stdc++.h>
using namespace std;
int a[12];
int n;
bool dfs(int b, int c, int ct) {
  if(ct == 10) return true;
  if(b < a[ct] && dfs(a[ct], c, ct + 1)) return true;
  if(c < a[ct] && dfs(b, a[ct], ct + 1)) return true;
  return false;
}

int main() {
  scanf("%d", &n);
  for(int j = 0; j < n; ++j) {
    for(int i = 0; i < 10; ++i) {
      scanf("%d", &a[i]);
    }
    printf("%s\n", dfs(0, 0, 0) ? "YES" : "NO");
  }
  return 0;
}