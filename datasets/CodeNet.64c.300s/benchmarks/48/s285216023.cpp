#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int p[1000000];
int cnt[1000000];

int main()
{
  fill(p, p + 1000000, 1);
  p[0] = p[1] = 0;
  for(int i=2;i<1000000;i++)
    for(int j=i*2;j<1000000;j+=i)
      p[j] = 0;

  for(int i=1;i<1000000;i++)
    cnt[i] = cnt[i-1] + p[i];

  int n;
  while(scanf("%d", &n) != -1)
    printf("%d\n", cnt[n]);

  return 0;
}  