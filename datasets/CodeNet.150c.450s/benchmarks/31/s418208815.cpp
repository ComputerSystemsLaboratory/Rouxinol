#include<iostream>
#include<cstdio>
using namespace std;
const int INF = 2e9;

int n, r[200000];
int ans = -INF;
int main()
{
  scanf("%d", &n);
  for(int i = 0; i < n; i++)
    scanf("%d", &r[i]);

  int mn = r[0];
  for(int i = 1; i < n; i++){
    ans = max(ans, r[i] - mn);
    mn = min(mn, r[i]);
  }

  printf("%d\n", ans);
  return 0;
}