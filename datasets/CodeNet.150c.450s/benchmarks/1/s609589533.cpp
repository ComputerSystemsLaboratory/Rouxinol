#include <cstdio>
#include <algorithm>
#include <climits>
using namespace std;
long long dp[100001];
long long a[100001];
int main()
{
  int n;
    
  scanf("%d", &n);
  fill(dp, dp+n, 10e8);
  for(int i=0; i<n; i++)
    scanf("%Ld", &a[i]);
    
  for(int i=0; i<n; i++)
    *lower_bound(dp, dp+n, a[i]) = a[i];
    
  printf("%Ld\n", lower_bound(dp, dp+n, 10e8) - dp);
    
  return 0;
}